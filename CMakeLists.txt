cmake_minimum_required(VERSION 3.0)

project(chuchu VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(chuchu
    main.cpp,
    vectors.cpp
)
