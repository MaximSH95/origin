#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

class Address {
private:
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;

public:
    Address(std::string city = "", std::string street = "", int houseNumber = 0, int apartmentNumber = 0) : city(city), street(street), houseNumber(houseNumber), apartmentNumber(apartmentNumber) {}
    
    std::string get_output_address() {
        return city + ", " + street + ", " + std::to_string(houseNumber) + ", " + std::to_string(apartmentNumber);
    }

    std::string get_city() {
        return city;
    }
};

void sortAddresses(Address* addresses, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (addresses[j].get_city() > addresses[j + 1].get_city()) {
                Address temp = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int count;
    std::ifstream read("in.txt");
    read >> count;
    Address* addresses = new Address[count];
    if (read.is_open())
    {
        for (int i = 0; i < count; ++i) {
            std::string city, street;
            int houseNumber, apartmentNumber;
            read >> city >> street >> houseNumber >> apartmentNumber;
            addresses[i] = Address(city, street, houseNumber, apartmentNumber);
        }
    }
    else
    {
        std::cout << "Не получилось открыть in.txt" << std::endl;
    }

    sortAddresses(addresses, count);

    std::ofstream record("out.txt");
    record << count << std::endl;
    for(int i = 0; i < count; ++i)
    record << addresses[i].get_output_address() << std::endl;

    read.close();
    record.close();
    delete[] addresses;
    return 0;
}
