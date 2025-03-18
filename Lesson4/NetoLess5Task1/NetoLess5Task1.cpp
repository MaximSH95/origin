#include <iostream>
#include "func.h"

int main()
{
	setlocale(LC_ALL, "RU");
	int a, b, x;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> x;
	if ( x == 1) {
		add(a, b);
	}
	else if ( x == 2) {
		sub(a, b);
	}
	else if ( x == 3) {
		mult(a, b);
	}
	else if ( x == 4) {
		division(a, b);
	}
	else if ( x == 5) {
		rais(a, b);
	}
	else {
		std::cout << "Error!" << std::endl;
	}
	return 0;
}