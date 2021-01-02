add_test(NAME Runs COMMAND pas2dox)

function(do_test arg)
  add_test(NAME ${arg} 
    COMMAND "${CMAKE_COMMAND}" -D TESTDIR=${CMAKE_CURRENT_LIST_DIR} -P "${CMAKE_CURRENT_LIST_DIR}/testone.cmake" ../src/pas2dox "${arg}.pas"
  )
endfunction(do_test)


do_test(array)
do_test(classes)
do_test(comments_in_function_args)
do_test(comments)
do_test(constants)
do_test(const_before_type)
do_test(enum)
do_test(func)
do_test(inner_class)
do_test(properties)
do_test(record)
do_test(using)
