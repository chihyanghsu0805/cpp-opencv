cmake_minimum_required(VERSION 3.0.0)
project(cpp-opencv VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(lenna IntroductionToOpenCV/lenna.cpp)
target_link_libraries(lenna ${OpenCV_LIBS})

add_executable(opencv_test IntroductionToOpenCV/opencv_test.cpp)
target_link_libraries(opencv_test ${OpenCV_LIBS})

add_executable(starry_night IntroductionToOpenCV/starry_night.cpp)
target_link_libraries(starry_night ${OpenCV_LIBS})

add_executable(mat_example TheCoreFunctionality/mat.cpp)
target_link_libraries(mat_example ${OpenCV_LIBS} )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
