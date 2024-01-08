add_library(operation SHARED addition.c division.c modulus.c multiplication.c subtraction.c)

  

target_include_directories(operation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
