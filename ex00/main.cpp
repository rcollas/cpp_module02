#include "Fixed.hpp"
#include <iostream>

int main() {

	Fixed a;
	Fixed b(30);

	a = Fixed(12);
	std::cout << a << std::endl;
	a = b;
	std::cout << a << std::endl;

	return 0;
}