cmake_minimum_required(VERSION 3.13...3.16)

project(mul
	VERSION 1.0
	DESCRIPTION "My Utility Library"
	LANGUAGES CXX)

option(BUILD_TESTS "Build the tests" OFF)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)

	set(CMAKE_CXX_EXTENSIONS OFF)
	set_property(GLOBAL PROPERTY USE_FOLDERS ON)

	enable_testing()
	include(GoogleTest)
	include(cmake/add_gtest.cmake)

endif()

add_subdirectory(src)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTS)
  add_subdirectory(tests)
endif()


