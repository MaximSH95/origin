#include "func.h"

int add(int a, int b) {
	std::cout << a << " + " << b << " = " << a + b;
	return a + b;
}
int sub(int a, int b) {
	std::cout << a << " - " << b << " = " << a - b;
	return a - b;
}
int mult(int a, int b) {
	std::cout << a << " * " << b << " = " << a * b;
	return a * b;
}
double division(int a, int b) {

	if (b == 0) {
		std::cout << "Error!" << std::endl;
		return 0;
	}
	std::cout << a << " / " << b << " = " << a / b;
	return static_cast<double>(a) / b;
}

int rais(int a, int b) {
	int result = 1;
	for (int i = 0; i < b; ++i) {
		result *= a;
	}
	std::cout << a << " в степени " << b << " = " << result;
	return result;
}