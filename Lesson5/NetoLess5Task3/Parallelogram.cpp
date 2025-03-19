#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B)
    : Quadrilateral(a, b, a, b, A, B, A, B) {
}

void Parallelogram::printInfo() const {
    std::cout << "��������������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
    std::cout << std::endl;
}