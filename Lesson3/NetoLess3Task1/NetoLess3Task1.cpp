#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

class Address {
private:
    std::string city{};
    std::string street{};
    int numH{};
    int numA{};

public:
    Address(std::string set_city = "", std::string set_street = "", int set_numH = 0, int set_numA = 0) : city(set_city), street(set_street), numH(set_numH), numA(set_numA) {}

    std::string get_output_address() {
        return city + " , " + street + " , " + std::to_string(numH) + " , " + std::to_string(numA);
    }

    std::string sort_city() {
        return city;
    }
};
    void swapAddress(Address& a, Address& b) {
    Address temp = a;
    a = b;
    b = temp;
    }

int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    std::ifstream read("in.txt");
    int count;
    read >> count;
    Address* address = new Address[count];
    if (read.is_open())
    {
        for (int i = 0; i < count; ++i) {
            std::string city, street;
            int numH , numA;
            read >> city >> street >> numH >> numA;
            address[i] = Address(city, street, numH, numA);
        }
    }else { std::cout << "Не удалось открыть файл" << std::endl; }

    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (address[j].sort_city() < address[j + 1].sort_city()) {
                swapAddress(address[j], address[j + 1]);
            }
        }
    }

    std::ofstream record("out.txt");
    record << count <<std::endl;
    for (int i = 0; i < count; ++i) {
        record << address[i].get_output_address() << std::endl;
    }

    read.close();
    record.close();
    delete[] address;
    return 0;
}
