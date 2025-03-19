#pragma once
#include <iostream>
#include "Quadrilateral.h"
 
class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B);
    void printInfo() const;
};