#include "Triangle.h"


Triangle::Triangle(int a, int b, int c, int A, int B, int C)
        : a(a), b(b), c(c), A(A), B(B), C(C) {
    }

void Triangle::printInfo() const {
        std::cout << "�����������:\n";
        std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
        std::cout << "����: A=" << A << " B=" << B << " C=" << C << "\n";
        std::cout << std::endl;
   }