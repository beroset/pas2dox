execute_process(COMMAND "${CMAKE_COMMAND}" -E copy "${TESTDIR}/${CMAKE_ARGV6}" "${CMAKE_ARGV6}")
execute_process(COMMAND "${CMAKE_COMMAND}" -E rm "${CMAKE_ARGV6}.cpp")
execute_process(COMMAND "${CMAKE_ARGV5}" -o "${CMAKE_ARGV6}")
execute_process(COMMAND "${CMAKE_COMMAND}" -E compare_files "${TESTDIR}/${CMAKE_ARGV6}.cpp" "${CMAKE_ARGV6}.cpp")
