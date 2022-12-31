cmake_minimum_required(VERSION 3.0.0)
project(cpp-opencv VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(lenna lenna.cpp)
target_link_libraries(lenna ${OpenCV_LIBS} )

add_executable(opencv_test opencv_test.cpp)
target_link_libraries(opencv_test ${OpenCV_LIBS} )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
