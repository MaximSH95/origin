#pragma once
#include <iostream>
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(int a, int b);
    void printInfo() const;
};