#include <iostream>
#include <string>
#include <Windows.h>

class Counter {
    private:
        int num{};

    public:
        Counter(int set_num = 1 ) : num{ set_num } {}
        int add() {
            return ++num;
        }
        int subtract() {
            return --num;
        }
        int sol()
        {
            return num;
        }
};

int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter* counter = nullptr;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string start;
    std::getline(std::cin >> std::ws, start);

    if (start == "да") {
        std::cout << "Введите начальное значение счетчика: ";
        int init_num;
        std::cin >> init_num;
        counter = new Counter(init_num);
    } else {
        counter = new Counter();
        std::cout << "Значение по умолчанию 1: " <<std::endl;
    }

    char ch;
    
    do {
        std::cout << "Введите команду ('+' , '-', '=', или 'x'): ";
        std::cin >> ch;
        if (ch == '+') {
            counter->add();
        } else if (ch == '-') {
            counter->subtract();
        } else if (ch == '=') {
            std::cout << counter->sol() << std::endl;
        } else if (ch == 'x') {
            std::cout << "До свидания!" << std::endl;
            break;
        }
    } while (true);
    return 0;
}
