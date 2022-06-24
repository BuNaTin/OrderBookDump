cmake_minimum_required(VERSION 3.16)

project(OrderBookDump)

set(Project OrderBookDump)

set(CORE_LIB OrderBookDump-lib)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/includes)
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs)

set(PUBLIC_INCLUDES
    ${INC_DIR}/lib.h
)

set(PRIVATE_SOURCES
    ${SRC_DIR}/lib.c
)

set(ALL_INCLUDES
    ${PUBLIC_INCLUDES}
    ${PRIVATE_SOURCES}
)

include_directories(
    ${INC_DIR}
    ${CMAKE_SOURCE_DIR}
    ${LIB_DIR}
)

add_library(${CORE_LIB}
    STATIC
    ${ALL_INCLUDES}
)

add_executable(${Project} main.c)

target_link_libraries(${Project} ${CORE_LIB})
