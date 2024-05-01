enable_testing()
set(TEST_APP_NAME ${APP_NAME}_tests)
set(TEST_SOURCES
    main_tests.cpp)

set(CPPUTEST_LDFLAGS CppUTest CppUTestExt)

include_directories(../include/ 
                    /external/cpputest/include
                    /external/cpputest/include/CppUTest 
                    /external/cpputest/include/CppUTestExt)

set(CPPUTEST_LIBRARIES 
    /external/cpputest/lib)
link_directories(${CPPUTEST_LIBRARIES})

add_executable(${TEST_APP_NAME} ${TEST_SOURCES})
target_link_libraries(${TEST_APP_NAME} PRIVATE
                      ${PROJECT_NAME}_lib
                      ${CPPUTEST_LDFLAGS}) #library to be tested

        
#test command
add_custom_command(TARGET ${TEST_APP_NAME} COMMAND ./${TEST_APP_NAME} POST_BUILD)