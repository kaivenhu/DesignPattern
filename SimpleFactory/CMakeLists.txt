
project(SimpleFactory)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -W -Wall")

set(SRC_DIR ${PROJECT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC_FILES "${SRC_DIR}/*.cc")
file(GLOB HEADER_FILES "${INCLUDE_DIR}/SimpleFactory/*.h")

include_directories(${INCLUDE_DIR})

add_library(SimpleFactory SHARED ${SRC_FILES} ${HEADER_FILES})

add_executable(main main.cc)

target_link_libraries(main SimpleFactory)
