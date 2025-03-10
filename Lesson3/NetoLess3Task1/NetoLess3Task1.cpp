#include <iostream>
#include <string>
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
};

int main()
{
    std::ifstream read("in.txt");
    int count;
    read >> count;
    Address* address = new Address[count];
    if (read.is_open())
    {
        for (int i = 0; i < count; ++i) {
            std::string city, street;
            int numH, numA;
            read >> city >> street >> numH >> numA;
            address[i] = Address(city, street, numH, numA);
        }
    }
    else { std::cout << "Не удалось открыть файл" << std::endl; }

   

    std::ofstream record("out.txt");
    record << count << std::endl;
    for (int i = count - 1; i >= 0; --i) {
        record << address[i].get_output_address() << std::endl;
    }

    read.close();
    record.close();
    delete[] address;
    return 0;
}