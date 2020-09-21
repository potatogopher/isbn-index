cmake_minimum_required(VERSION 3.16)
project(isbn_index)

set(CMAKE_CXX_STANDARD 14)

add_executable(isbn_index main.cpp src/book.h src/library.h src/library.cpp src/book.cpp)