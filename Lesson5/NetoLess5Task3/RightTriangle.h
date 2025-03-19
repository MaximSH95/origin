#pragma once
#include <iostream>
#include "Triangle.h"

class RightTriangle : public Triangle{
public:
    RightTriangle(int a, int b, int c, int A, int B);
    void printInfo() const;
};