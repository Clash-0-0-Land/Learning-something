cmake_minimum_required(VERSION 4.1)
project(estrDados C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(Lista_Pratica_Dupla_Italo_Josue)

add_executable(estrDados
        Lista_Pratica_Dupla_Italo_Josue/01_Lista_Estatica_Sequencial/main.c
        Lista_Pratica_Dupla_Italo_Josue/01_Lista_Estatica_Sequencial/lista.c
        Lista_Pratica_Dupla_Italo_Josue/03_Lista_Encadeada_Dinamica/lista.c
        Lista_Pratica_Dupla_Italo_Josue/03_Lista_Encadeada_Dinamica/lista.h)


