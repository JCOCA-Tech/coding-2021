cmake_minimum_required(VERSION 3.20)
project(MyProject VERSION 1.0.0)

# here we specify that the project is C language only, so the default
# C compiler on the system will be used
project(WorkingWithPointers C)

add_executable(WorkingWithPointers WorkingWithPointers.c)