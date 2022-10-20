cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(testtorch)
#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH /home/eco0936_namnh/Desktop/libtorch)
find_package(Torch REQUIRED)

# find_package( OpenCV REQUIRED )


# include_directories( ${OpenCV_INCLUDE_DIRS} )


add_executable(testtorch main.cpp)

# target_link_libraries( opencvtest ${OpenCV_LIBS} )
target_link_libraries(testtorch ${TORCH_LIBRARIES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)