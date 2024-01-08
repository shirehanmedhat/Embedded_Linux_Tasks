add_library(operation STATIC addition.c division.c modulus.c multiplication.c subtraction.c)

  

target_include_directories(operation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
