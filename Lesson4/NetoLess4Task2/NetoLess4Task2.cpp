#include <iostream>
#include <string>

class Triangle {
protected:
    std::string name;
    int a, b, c;
    int A, B, C;
public:
    Triangle(int a, int b, int c, int A, int B, int C, const std::string &name = "Треугольник")
        : a(a), b(b), c(c), A(A), B(B), C(C), name(name) {
    }

    virtual void print_info()  {
        std::cout << name << ":\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B)
        : Triangle(a, b, c, A, B, 90, "\nПрямоугольный треугольник") {
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B)
        : Triangle(a, b, a, A, B, A, "\nРавнобедренный треугольник") {
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int a)
        : Triangle(a, a, a, 60, 60, 60, "\nРавносторонний треугольник") {
    }
};

class Quadrilateral {
protected:
    std::string name;
    int a, b, c, d;
    int A, B, C, D;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, const std::string &name = "\nЧетырёхугольник")
        : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D), name(name) {
    }

    virtual void print_info() {
        std::cout << name << ":\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Rectangle : public Quadrilateral {
public:
    Rectangle(int a, int b)
        : Quadrilateral(a, b, a, b, 90, 90, 90, 90, "\nПрямоугольник") {
    }
};

class Square : public Rectangle {
public:
    Square(int a)
        : Rectangle(a, a) {
        name = "Квадрат";
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B)
        : Quadrilateral(a, b, a, b, A, B, A, B, "\nПараллелограмм") {
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(int a, int A, int B)
        : Parallelogram(a, a, A, B) {
        name = "\nРомб";
    }
};

void print_info( Triangle* triangle) {
    triangle->print_info();
}

void print_info( Quadrilateral* quadrilateral) {
    quadrilateral->print_info();
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
    

    triangle.print_info();
    rightTriangle.print_info();
    isoscelesTriangle.print_info();
    equilateralTriangle.print_info();
    quadrilateral.print_info();
    rectangle.print_info();
    square.print_info();
    parallelogram.print_info();
    rhombus.print_info();

    return 0;
}