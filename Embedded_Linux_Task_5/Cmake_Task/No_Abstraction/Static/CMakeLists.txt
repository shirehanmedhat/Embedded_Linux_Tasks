cmake_minimum_required(VERSION 3.22.0)
project(SimpleProject 
        DESCRIPTION "Calculator")
#Set The Linking FLAG To Be Static!!!
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++")
add_executable(${PROJECT_NAME} calculator.c)

target_include_directories(${PROJECT_NAME} PUBLIC include)

add_library(operation STATIC lib/addition.c lib/division.c lib/modulus.c lib/multiplication.c lib/subtraction.c)

target_link_libraries(${PROJECT_NAME} PRIVATE operation) 

