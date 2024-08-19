cmake_minimum_required(VERSION 3.28)
project(_C C)

set(CMAKE_C_STANDARD 99)

# Primer ejecutable basado en main.c
add_executable(MyMainExecutable main.c)

# Segundo ejecutable basado en master.c
add_executable(MyMasterExecutable master.c)
