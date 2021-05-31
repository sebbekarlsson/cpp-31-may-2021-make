#include <stdio.h>
#include <iostream>
#include "../include/Square.hpp"


int main(int argc, char* argv[]) {   
    Square a = Square(128, 128);
    Square b = Square(32, 32);
    
    Square c = a + b;

    printf("width: %d\n", a.getWidth());
    printf("height: %d\n", a.getHeight());

    return 0;
}