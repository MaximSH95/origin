#include <iostream>
#include <string>
#include <locale>
#include <windows.h> 

struct Person {
    int number{};
    std::string name{};
    float balance{};
};
void updateBalance(Person& personOne, double newBalance) {
    personOne.balance = newBalance;
}

int main() {
   
    setlocale(LC_ALL, "Russian");

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Person personOne{};
    std::cout << "Введите номер счета: ";
    std::cin >> personOne.number;
    std::cin.ignore(); 
    std::cout << "Введите имя владельца: ";
    std::getline(std::cin, personOne.name);
    std::cout << "Введите баланс: ";
    std::cin >> personOne.balance;
    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;
    updateBalance(personOne, newBalance);

   
    std::cout << "Ваш счёт: " << personOne.name << ", " << personOne.number << ", " << personOne.balance << std::endl;

    return 0;
}