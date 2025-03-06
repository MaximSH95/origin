#include <iostream>
#include <string>
#include <Windows.h>

class Counter {
    private:
        int num{};

    public:
        Counter(int set_num = 1 ) : num{ set_num } {}
        void setNum(int set_num) {
            num = set_num;
        }

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

    Counter counter;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string start;
    std::getline(std::cin >> std::ws, start);
    char ch ;

    if (start == "да") {
        std::cout << "Введите начальное значение счетчика: ";
        int init_num;
        std::cin >> init_num;
        counter.setNum(init_num);
        while (true) {
            std::cout << "Введите команду ('+' , '-', '=', или 'x'): ";
            std::cin >> ch;
            if (ch == '+') {
                counter.add();
            }
            if (ch == '-') {
                counter.subtract();
            }
            if (ch == '=') {
                std::cout << counter.sol() << std::endl;
            }
            if (ch == 'x') {
                std::cout << "До свидания!" << std::endl;
                break;
            }
        }
    }
    if (start == "нет") {
        std::cout << "Счетчик по умолчанию 1" << std::endl;
        while (true) {
            std::cout << "Введите команду ('+' , '-', '=', или 'x'): ";
            std::cin >> ch;
            if (ch == '+') {
                counter.add();
            }
            if (ch == '-') {
                counter.subtract();
            }
            if (ch == '=') {
                std::cout << counter.sol() << std::endl;
            }
            if (ch == 'x') {
                std::cout << "До свидания!" << std::endl;
                break;
            }
        }
    }

    return 0;
}
