#pragma once
#include <iostream>
#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B);
    void printInfo() const;
};