#pragma once
#include <iostream>

class Triangle{
protected:
    int a, b, c;
    int A, B, C;

public:
    Triangle(int a, int b, int c, int A, int B, int C);
    void printInfo() const;
};

