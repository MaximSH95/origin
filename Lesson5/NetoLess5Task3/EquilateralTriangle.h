#pragma once
#include <iostream>
#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int a);
    void printInfo() const;
};