macro(add_gtest TESTNAME)
    
    add_executable(${TESTNAME} ${ARGN})
    target_link_libraries(${TESTNAME} mul gtest gmock gtest_main)
    
    gtest_discover_tests(${TESTNAME}
        WORKING_DIRECTORY ${PROJECT_DIR}
        PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${PROJECT_DIR}"
    )
    set_target_properties(${TESTNAME} PROPERTIES FOLDER tests)
endmacro()