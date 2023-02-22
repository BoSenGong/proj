cmake_minimum_required(VERSION 3.0)
project(proj)

aux_source_directory(. DIR_TOOT_SRCS)

set(CMAKE_CXX_FLAGS "-g ${CMAKE_CXX_FLAGS}")
set(CMAKE_C_FLAGS "-std=gnu99 ${CMAKE_C_FLAGS}")

set(BOOST_ROOT "C:/Boost/boost_1_81_0")
FIND_PACKAGE(Boost)
IF(Boost_FOUND)
    INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
    ADD_DEFINITIONS( "-DHAS_BOOST" )
    LINK_DIRECTORIES(${Boost_LIBRARY_DIRS})

    MESSAGE( STATUS "Boost_LIB_VERSION = ${Boost_LIB_VERSION}.")
    MESSAGE( STATUS "Boost_INCLUDE_DIRS = ${Boost_INCLUDE_DIRS}.")
    MESSAGE( STATUS "Boost_LIBRARY_DIRS = ${Boost_LIBRARY_DIRS}.")
ENDIF()

add_executable(${PROJECT_NAME} ${DIR_TOOT_SRCS})
target_link_libraries(proj ${Boost_LIBRARIES})