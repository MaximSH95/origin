#include <iostream>
#include <string>

class Figure {
public:
    virtual void printInfo() const = 0;
};

class Triangle : public Figure {
protected:
    int a, b, c; 
    int A, B, C; 

public:
    Triangle(int a, int b, int c, int A, int B, int C)
        : a(a), b(b), c(c), A(A), B(B), C(C) {
    }

    void printInfo() const override {
        std::cout << "Треугольник:\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
        std::cout << std::endl;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B)
        : Triangle(a, b, c, A, B, 90) {
    } 

    void printInfo() const override {
        std::cout << "Прямоугольный треугольник:\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
        std::cout << std::endl;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B)
        : Triangle(a, b, a, A, B, A) {
    }

    void printInfo() const override {
        std::cout << "Равнобедренный треугольник:\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
        std::cout << std::endl;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int a)
        : Triangle(a, a, a, 60, 60, 60) {
    } 

    void printInfo() const override {
        std::cout << "Равносторонний треугольник:\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
        std::cout << std::endl;
    }
};

class Quadrilateral : public Figure {
protected:
    int a, b, c, d; 
    int A, B, C, D;

public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
        : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    }

    void printInfo() const override {
        std::cout << "Четырёхугольник:\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
        std::cout << std::endl;
    }
};

class Rectangle : public Quadrilateral {
public:
    Rectangle(int a, int b)
        : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {
    }

    void printInfo() const override {
        std::cout << "Прямоугольник:\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
        std::cout << std::endl;
    }
};

class Square : public Rectangle {
public:
    Square(int a)
        : Rectangle(a, a) {
    }

    void printInfo() const override {
        std::cout << "Квадрат:\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
        std::cout << std::endl;
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B)
        : Quadrilateral(a, b, a, b, A, B, A, B) {
    }

    void printInfo() const override {
        std::cout << "Параллелограмм:\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
        std::cout << std::endl;
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B)
        : Parallelogram(a, a, A, B) {
    }

    void printInfo() const override {
        std::cout << "Ромб:\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
        std::cout << std::endl;
    }
};

void printInfo(Figure* figure) {
    figure->printInfo();
    std::cout << "\n";
}

int main() {

    setlocale(LC_ALL, "RU");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    triangle.printInfo();
    rightTriangle.printInfo();
    isoscelesTriangle.printInfo();
    equilateralTriangle.printInfo();
    quadrilateral.printInfo();
    rectangle.printInfo();
    square.printInfo();
    parallelogram.printInfo();
    rhombus.printInfo();

    return 0;
}