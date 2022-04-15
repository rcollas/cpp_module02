#include "Fixed.hpp"

int const Fixed::m_floatPartBits = 8;

Fixed::Fixed() : m_nb(0) {}

Fixed::Fixed(int const nb) {

	m_nb = nb << m_floatPartBits;
}

Fixed::Fixed(float const nb) {

	m_nb = roundf(nb * (1 << m_floatPartBits));
}

Fixed::Fixed(Fixed const & src) {

	this->m_nb = src.getRawBits();
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {

	return m_nb;
}

void Fixed::setRawBits(const int raw) {

	m_nb = raw;
}

int Fixed::toInt() const {

	return m_nb >> m_floatPartBits;
}

float Fixed::toFloat() const {

	return (float)m_nb / (float)(1 << m_floatPartBits);
}
