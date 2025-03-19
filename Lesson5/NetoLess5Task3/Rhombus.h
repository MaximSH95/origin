#pragma once
#include <iostream>
#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B);
    void printInfo() const;
};