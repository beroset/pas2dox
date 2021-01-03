cmake_minimum_required(VERSION 3.1)
set(EXECUTABLE_NAME "pas2dox")
find_package(FLEX)
if(MSVC)
    add_compile_opttions(-D_WIN32_WINDOWS=0x0601 -D_WIN32_WINNT=0x0601 --wincompat)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif(MSVC)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
    "config.h.in"
    "config.h"
)
FLEX_TARGET(scanner ${EXECUTABLE_NAME}.l ${CMAKE_CURRENT_BINARY_DIR}/${EXECUTABLE_NAME}.cpp)
add_executable(${EXECUTABLE_NAME} ${FLEX_scanner_OUTPUTS})
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
INSTALL(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)
