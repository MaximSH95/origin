#include <iostream>
#include <string>

struct Address {
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    int index;
};

void printAddress(Address& address);

int main()
{
    setlocale(LC_ALL, "RU");
    Address address1 = { "Москва", "Арбат", 12, 8, 123456 };
    Address address2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
    printAddress(address1);
    std::cout << '\n';
    printAddress(address2);
    return 0;
}

void printAddress(Address& address) {
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << address.apartmentNumber << std::endl;
    std::cout << "Индекс: " << address.index << std::endl;
}