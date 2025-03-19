#include "Square .h"

Square::Square(int a)
    : Rectangle(a, a) {
}

void Square::printInfo() const {
    std::cout << "Квадрат:\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
    std::cout << std::endl;;
}