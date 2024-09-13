cmake_minimum_required(VERSION 3.28)
project(Minha_calculadora_funcional C)

set(CMAKE_C_STANDARD 11)

add_executable(Minha_calculadora_funcional main.c
        minha_funcao.h
        minha_funcao.c)
