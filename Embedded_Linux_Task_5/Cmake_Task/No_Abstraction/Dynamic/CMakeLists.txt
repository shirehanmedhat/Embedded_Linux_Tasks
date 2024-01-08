cmake_minimum_required(VERSION 3.22.0)
project(SimpleProject 
        DESCRIPTION "Calculator")

add_executable(${PROJECT_NAME} calculator.c)

target_include_directories(${PROJECT_NAME} PUBLIC include)



add_library(operation SHARED lib/addition.c lib/division.c lib/modulus.c lib/multiplication.c lib/subtraction.c)

target_link_libraries(${PROJECT_NAME} PRIVATE operation) 

