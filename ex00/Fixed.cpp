#include "Fixed.hpp"

Fixed::Fixed() {}

Fixed::~Fixed() {}

Fixed::Fixed(int const nb) {

	m_nb = nb;
}

Fixed::Fixed(float const nb) {

	m_nb = nb;
}

Fixed& Fixed::operator=(Fixed const &rhs) {

	this->m_nb = rhs.m_nb;
	return *this;
}

std::ostream& operator<<(std::ostream& out, Fixed const &rhs) {

	out << rhs.m_nb;
	return out;
}