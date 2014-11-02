PROJECT(LambdaFunction)
cmake_minimum_required(VERSION 2.6)

add_definitions(-Wall -Wextra -std=c++11)

add_executable(main src/main.cpp
		    src/Arr.cpp)
