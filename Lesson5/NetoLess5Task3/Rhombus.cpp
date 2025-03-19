#include "Rhombus.h"

Rhombus::Rhombus(int a, int A, int B)
    : Parallelogram(a, a, A, B) {
}
void Rhombus::printInfo() const {
    std::cout << "����:\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
    std::cout << std::endl;
}