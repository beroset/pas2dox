cmake_minimum_required(VERSION 3.1)
set(EXECUTABLE_NAME "pas2dox")
find_package(FLEX)
if(MSVC)
    add_compile_options(-D_WIN32_WINDOWS=0x0601 -D_WIN32_WINNT=0x0601 --wincompat)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif(MSVC)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file ("config.h.in" "config.h")
FLEX_TARGET(scanner ${EXECUTABLE_NAME}.l ${CMAKE_CURRENT_BINARY_DIR}/${EXECUTABLE_NAME}.cpp)
add_executable(${EXECUTABLE_NAME} ${FLEX_scanner_OUTPUTS})
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
INSTALL(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)

# add msys dlls if needed
if (${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    execute_process(COMMAND "${CMAKE_CXX_COMPILER}" -print-sysroot OUTPUT_VARIABLE SYSROOT OUTPUT_STRIP_TRAILING_WHITESPACE)
    set(SYSROOT "${SYSROOT}/mingw/bin")
    set(_needed_dlls "libgcc_s_seh-1.dll" "libstdc++-6.dll" "libwinpthread-1.dll")
    foreach(_dll ${_needed_dlls})
        execute_process(COMMAND "${CMAKE_COMMAND}" -E copy "${SYSROOT}/${_dll}" "${CMAKE_CURRENT_BINARY_DIR}")
        install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${_dll}" DESTINATION bin)
    endforeach()
endif()

