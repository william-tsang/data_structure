CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(list_test)

include_directories("${PROJECT_SOURCE_DIR}/inc")

AUX_SOURCE_DIRECTORY(./test SRC_LIST)
#add_subdirectory(./src)

ADD_EXECUTABLE(list_test ${SRC_LIST})