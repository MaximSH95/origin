#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a)
    : Triangle(a, a, a, 60, 60, 60) {
}

void EquilateralTriangle::printInfo() const {
    std::cout << "��������������  �����������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << "\n";
    std::cout << std::endl;
}