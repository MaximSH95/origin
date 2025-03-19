#pragma once
#include <iostream>

class Quadrilateral {
protected:
    int a, b, c, d;
    int A, B, C, D;

public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
    void printInfo() const;
};

