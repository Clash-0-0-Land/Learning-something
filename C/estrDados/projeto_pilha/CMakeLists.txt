cmake_minimum_required(VERSION 4.3)
project(projeto_pilha C)

set(CMAKE_C_STANDARD 99)

add_executable(projeto_pilha main.c
        pilha.c
        pilha.h
)
