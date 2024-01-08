cmake_minimum_required(VERSION 3.22.0)
project(SimpleProject 
        DESCRIPTION "Calculator")
        
        
add_subdirectory (${CMAKE_HOME_DIRECTORY}/lib)  

add_executable(${PROJECT_NAME} calculator.c)

target_include_directories(${PROJECT_NAME} INTERFACE include)
 
target_link_libraries(${PROJECT_NAME} PRIVATE operation) 

