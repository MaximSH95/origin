#include <iostream>

class Calculator {
private:
    double num1{};
    double num2{};

public:
    Calculator(double set_num1 = 0, double set_num2 = 0) : num1{ set_num1 }, num2{ set_num2 } {}
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num1 - num2;
    }
    double subtract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }

    bool set_num1() {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        if (num1 != 0) {
            return true;
        }
        return false;
    }

    bool set_num2() {
        std::cout << "Введите num2: ";
        std::cin >> num2;
        if (num2 != 0) {
            return true;
        }
        return false;
    }
};

int main()
{
    setlocale(LC_ALL, "RU");
    Calculator calc{};
    while(true){
        while (!calc.set_num1()) {
            std::cout << "Неверный ввод!" << std::endl;
        }

        while (!calc.set_num2()) {
            std::cout << "Неверный ввод!" << std::endl;
        }

        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
    }
    return 0;
}