#include <iostream>
#include <string>
#include <Windows.h>
#include "Counter.h"

int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter counter(0);
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string start;
    std::getline(std::cin >> std::ws, start);

    if (start == "да") {
        std::cout << "Введите начальное значение счетчика: ";
        int init_num;
        std::cin >> init_num;
        Counter counter(init_num);
    }
    else {
        Counter counter();
        std::cout << "Значение по умолчанию 1: " << std::endl;
    }
    
    char ch;

    do {
        std::cout << "Введите команду ('+' , '-', '=', или 'x'): ";
        std::cin >> ch;
        if (ch == '+') {
            counter.add();
        }
        else if (ch == '-') {
            counter.subtract();
        }
        else if (ch == '=') {
            std::cout << counter.sol() << std::endl;
        }
        else if (ch == 'x') {
            std::cout << "До свидания!" << std::endl;
            break;
        }
    } while (true);
        return 0;
}
