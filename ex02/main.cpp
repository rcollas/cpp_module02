#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	Fixed a(125);
	Fixed b(123);

	Fixed c(Fixed(5.05f) * 2);

	std::cout << "a > b " << "\x1B[32m" << (a > b) << "\033[0m" << std::endl;
	std::cout << "a < b " << "\x1B[31m" << (a < b) << "\033[0m" << std::endl;
	std::cout << "b > a " << "\x1B[31m" << (b > a) << "\033[0m" << std::endl;
	std::cout << "b < a " << "\x1B[32m" << (b < a) << "\033[0m" << std::endl;
	std::cout << "a > 12.5 " << "\x1B[32m" << (a > 12.5f) << "\033[0m"
				<< std::endl;
	std::cout << "a <= 125.5 " << "\x1B[32m" << (a <= 125.5f) << "\033[0m"
				<< std::endl;
	std::cout << "a >= 125 " << "\x1B[32m" << (a >= 125) << "\033[0m" << std::endl;
	std::cout << "a < 12.5 " << "\x1B[31m" << (a < 12.5f) << "\033[0m"
				<< std::endl;
	std::cout << "a > 123 " << "\x1B[32m" << (a > 123) << "\033[0m"
				<< std::endl;
	std::cout << "a == b " << "\x1B[31m" << (a == b) << "\033[0m"
			  << std::endl;
	std::cout << "a == 125 " << "\x1B[32m" << (a == 125) << "\033[0m"
			  << std::endl;
	std::cout << "a != 125 " << "\x1B[31m" << (a != 125) << "\033[0m"
			  << std::endl;
	std::cout << "a + 112342 " << a + 112342 << std::endl;
	std::cout << "a / 2 " << a / 2 << std::endl;

	std::cout << "c = " << c << std::endl;
	std::cout << "c * 10.5 = " << (c * 10.5f) << std::endl;
	std::cout << "c * 10 = " << (c * 10) << std::endl;

	Fixed d;

	std::cout << ++(++d) << std::endl;
	std::cout << d++ << std::endl;
	std::cout << d++ << std::endl;
	std::cout << (d--)-- << std::endl;
	std::cout << d-- << std::endl;
	std::cout << d-- << std::endl;

	Fixed const cA(5);
	Fixed const cB(10);

	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(cA, cB) << std::endl;
	std::cout << Fixed::max(cA, cB) << std::endl;

	return 0;
}