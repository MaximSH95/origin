#include <iostream>
#include <string>

class Figure
{
protected:
    int sides_count;
    std::string name;
public:
    Figure(std::string name, int sides_count = 0) {
    this->name = name;
    this->sides_count = sides_count;
}
void get_sides_count() {
    std::cout << name << ": " << sides_count << std::endl;
}
};

class Triangle : public Figure {
public: 
    Triangle(std::string name, int sides_count) :Figure(name, sides_count) {}
};
class Quadrangle : public Figure {
public:
    Quadrangle (std::string name, int sides_count) :Figure(name, sides_count) {}
};

int main()
{
    setlocale(LC_ALL, "RU");
    std::cout << "Количество сторон: " << std::endl;
    Figure figure("Фигура", 0);
    figure.get_sides_count();
    Triangle triangle("Треугольник", 3);
    triangle.get_sides_count();
    Quadrangle quadrangle("Четырёхугольник", 4);
    quadrangle.get_sides_count();

    return 0;
}
