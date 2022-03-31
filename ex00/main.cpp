#include "Fixed.hpp"
#include <iostream>

#define BITS 8
#define FRACTION (1 << BITS)
#define MASK (FRACTION - 1)

int main( void ) {

	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "size of int = " << sizeof(int) << std::endl;
	int d = 8388607;
	d = d << BITS;
	std::cout << "after right shit :" << d << std::endl;
	std::cout << "fixed point = " << (d >> BITS) << "." << (d & MASK) *
	100000000 / FRACTION << std::endl;
	return 0;
}