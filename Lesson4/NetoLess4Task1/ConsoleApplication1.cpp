#include <iostream>

class Figure
{
protected:
    int sides_count;
public:Figure(int sides_count = 0) {
    this->sides_count = sides_count;
}
void get_sides_count() {
    std::cout << "Фигура: " << sides_count << std::endl;
}
};

class Triangle : public Figure {
public: 
    Triangle(int sides_count) :Figure(sides_count) {}
    void get_sides_count(){
         std::cout << "Треугольник: " << sides_count << std::endl;
    }
};
class Quadrangle : public Figure {
public:
    Quadrangle (int sides_count) :Figure(sides_count) {}
    void get_sides_count() {
        std::cout << "Четырёхугольник: " << sides_count << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "RU");
    std::cout << "Количество сторон: " << std::endl;
    Figure figure(0);
    figure.get_sides_count();
    Triangle triangle(3);
    triangle.get_sides_count();
    Quadrangle quadrangle(4);
    quadrangle.get_sides_count();

    return 0;
}
