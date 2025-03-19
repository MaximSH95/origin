#include "Rectangle.h"

Rectangle::Rectangle(int a, int b)
    : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {
}

void Rectangle::printInfo() const {
    std::cout << "�������������:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
    std::cout << std::endl;
}