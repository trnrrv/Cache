file(GLOB
     MAIN "main.cpp")

include_directories(../include/)
add_library(${PROJECT_NAME}_lib INTERFACE)
if(COMPILE_TESTS STREQUAL OFF)
     add_executable(${PROJECT_NAME} ${MAIN})
endif(COMPILE_TESTS STREQUAL OFF)