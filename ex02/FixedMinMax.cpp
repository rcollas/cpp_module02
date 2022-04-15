#include "Fixed.hpp"

float Fixed::min(Fixed &a, Fixed &b) {

	return a < b ? a.toFloat() : b.toFloat();
}

float Fixed::min(Fixed const &a, Fixed const &b) {

	return a < b ? a.toFloat() : b.toFloat();
}

float Fixed::max(Fixed &a, Fixed &b) {

	return a > b ? a.toFloat() : b.toFloat();
}

float Fixed::max(Fixed const &a, Fixed const &b) {

	return a > b ? a.toFloat() : b.toFloat();
}
