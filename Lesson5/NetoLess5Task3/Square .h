#pragma once
#include <iostream>
#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(int a);
    void printInfo() const;
};