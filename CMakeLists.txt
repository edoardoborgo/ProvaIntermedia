cmake_minimum_required(VERSION 3.24)
project(ProvaIntermedia)

set(CMAKE_CXX_STANDARD 11)

add_executable(ProvaIntermedia src/main.cpp include/Book.h include/Date.h include/BookShelf.h src/Book.cpp src/BookShelf.cpp src/Date.cpp include/Exceptions.h include/Year.h)
