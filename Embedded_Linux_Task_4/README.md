
# Creating a Static Library for AVR Drivers (MCAL Layer)
### Task Description

This project involves creating a static library, libmcal.a, for the Microcontroller Abstraction Layer (MCAL) of AVR drivers. The library is intended to be used in AVR applications. The task also requires developing a simple application that demonstrates the usage of the static library, incorporating full headers for Digital I/O (dio.c) and Port (port.c). The final step involves testing the output ELF file on your AVR development board.

### Overview

This README provides detailed documentation on the creation of the static library (libmcal.a) for AVR applications. It explains the reasons for choosing a static library over dynamic libraries in AVR applications.


### The Steps:

- Setup Development Environment

    Ensure that the AVR compiler is added to the environment PATH. Add the following line to ~/.bashrc:
```bash
                    export PATH=$PATH:~/x-tools/avr/bin

```

* Apply changes to the current session:

```bash
                             source ~/.bashrc
```
* Navigate to the DIO directory and compile all the source files to generate objects

```bash
                    avr-gcc -c *.c -I . -I ../01_PORT -I ../../00_LIB

```

*  Navigate to the PORT directory and Compile all The Source Files To Generate objects

```bash 
                    avr-gcc -c *.c -I . -I ../00_DIO -I ../../00_LIB

```
* Navigate to the MCAL directory to Archive objects of DIO and PORT To create The Static Library
```bash 
                     ar -rcs libmcal.a 00_DIO/*.o 01_PORT/*.o
```

* Navigate to the App to create the object of the main source file 

```bash 
    avr-gcc -c main.c -I ../../01_MCAL/00_DIO -I ../../01_MCAL/01_PORT

```

    you may face that warning : "Compiler optimizations disabled; functions from <util/delay.h> won't work as designed" 
    To address this warning, you can ensure that you are compiling your code with optimizations enabled. Typically, you should compile with at least -O1 optimization level. If you're using the avr-gcc compiler, you can add the optimization flag when compiling.

* Compiler to link the specified object files and the static library into the final executable 
```bash
        avr-gcc -01 -mmcu=atmega32 -o main.elf main.o ../../01_MCAL/libmcal.a


```

### why using a static library (libmcal.a) in AVR applications over dynamic libraries.

1. Dynamic Loading and Linking:

    Dynamic libraries are loaded and linked at runtime by a dynamic linker. In bare-metal embedded systems without an OS, there may not be a standard dynamic linker to handle this process. The loading and linking of dynamic libraries would need to be managed explicitly in your application.

2. Dependency Management:

    Dynamic libraries may have dependencies on external resources or services, and managing these dependencies becomes more complex in bare-metal  embedded systems. Ensuring that all required resources are available and compatible is crucial.

3. Real-Time Considerations:

    In real-time embedded systems, determinism and predictability are critical. The dynamic nature of loading and linking libraries at runtime can introduce non-deterministic behavior, which may not be suitable for real-time applications.