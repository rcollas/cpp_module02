#include "Fixed.hpp"

int const Fixed::m_floatPartBits = 8;

Fixed::Fixed() : m_nb(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;
	this->m_nb = src.getRawBits();
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}


Fixed& Fixed::operator=(Fixed const &rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->m_nb = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {

	std::cout << "getRaWBits member function called" << std::endl;
	return this->m_nb;
}

void Fixed::setRawBits(const int raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->m_nb = raw;
}
