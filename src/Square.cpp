#include "../include/Square.hpp"



Square::Square(int width, int height){
    this->width = width;
    this->height = height;
}

const Square& Square::operator+(Square b) {
    // this = a
    // &b = b
    this->width = this->width * b.width;
    this->height = this->height * b.height;
    return *this;
}

int Square::getWidth() {
    return this->width;
}

int Square::getHeight() {
    return this->height;
}