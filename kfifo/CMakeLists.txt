CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(kfifo_test)

#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)

include_directories(${PROJECT_SOURCE_DIR}/inc)

aux_source_directory(${PROJECT_SOURCE_DIR}/test SRC_LIST)

add_executable(kfifo_test ${SRC_LIST})

link_directories(${PROJECT_SOURCE_DIR}/lib)

target_link_libraries(kfifo_test
	libkfifo.a 
)