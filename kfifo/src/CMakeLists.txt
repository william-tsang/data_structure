CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

aux_source_directory(. SRC_LIST)

include_directories(${PROJECT_SOURCE_DIR}/../inc)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# shared lib
add_library(kfifo SHARED ${SRC_LIST})
# static lib
add_library(kfifo_static STATIC ${SRC_LIST})

# set static lib name
set_target_properties(kfifo_static PROPERTIES OUTPUT_NAME "kfifo")
# make static and shared lib at the same time
set_target_properties(kfifo PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(kfifo_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

# set shared lib's VERSION and SOVERSION(API version)
set_target_properties(kfifo PROPERTIES VERSION 1.0 SOVERSION 1)