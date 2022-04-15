#include "Fixed.hpp"

int const Fixed::m_floatPartBits = 8;

Fixed::Fixed() : m_nb(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) {

	std::cout << "Int constructor called" << std::endl;
	m_nb = nb << m_floatPartBits;
}

Fixed::Fixed(float const nb) {

	std::cout << "Float constructor called" << std::endl;
	m_nb = roundf(nb * (1 << m_floatPartBits));
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
std::ostream& operator<<(std::ostream& out, Fixed const &rhs) {

	out << rhs.toFloat();
	return out;
}

int Fixed::getRawBits() const {

	std::cout << "getRaWBits member function called" << std::endl;
	return m_nb;
}

void Fixed::setRawBits(const int raw) {

	std::cout << "setRawBits member function called" << std::endl;
	m_nb = raw;
}

int Fixed::toInt() const {

	return m_nb >> m_floatPartBits;
}

float Fixed::toFloat() const {

	return (float)m_nb / (float)(1 << m_floatPartBits);
}
