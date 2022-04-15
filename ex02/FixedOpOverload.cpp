#include "Fixed.hpp"

Fixed& Fixed::operator=(Fixed const &rhs) {

	this->m_nb = rhs.getRawBits();
	return *this;
}

// == Operator

bool Fixed::operator==(Fixed const &rhs) const {

	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator==(float const &rhs) const {

	return this->toFloat() == rhs;
}

bool Fixed::operator==(int const &rhs) const {

	return this->toFloat() == rhs;
}

// != Operator

bool Fixed::operator!=(Fixed const &rhs) const {

	return this->toFloat() != rhs.toFloat();
}

bool Fixed::operator!=(float const &rhs) const {

	return this->toFloat() != rhs;
}

bool Fixed::operator!=(int const &rhs) const {

	return this->toFloat() != rhs;
}

// > Operator

bool Fixed::operator>(Fixed const &rhs) const {

	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator>(float const &rhs) const {

	return this->toFloat() > rhs;
}

bool Fixed::operator>(int const &rhs) const {

	return this->toFloat() > rhs;
}

// >= Operator

bool Fixed::operator>=(Fixed const &rhs) const {

	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator>=(float const &rhs) const {

	return this->toFloat() >= rhs;
}

bool Fixed::operator>=(int const &rhs) const {

	return this->toFloat() >= rhs;
}

// < Operator

bool Fixed::operator<(Fixed const &rhs) const {

	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator<(float const &rhs) const {

	return this->toFloat()	< rhs;
}

bool Fixed::operator<(int const &rhs) const {

	return this->toFloat() < rhs;
}

// <= Operator

bool Fixed::operator<=(Fixed const &rhs) const {

	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator<=(float const &rhs) const {

	return this->toFloat() <= rhs;
}

bool Fixed::operator<=(int const &rhs) const {

	return this->toFloat() <= rhs;
}

// + Operator

Fixed Fixed::operator+(Fixed const &rhs) {

	return this->toFloat() + rhs.toFloat();
}

float Fixed::operator+(float const &rhs) {

	return this->toFloat() + rhs;
}

float Fixed::operator+(int const &rhs) {

	return (this->toFloat() + rhs);
}

// - Operator

Fixed Fixed::operator-(Fixed const &rhs) {

	return this->toFloat() - rhs.toFloat();
}

float Fixed::operator-(float const &rhs) {

	return this->toFloat() - rhs;
}

float Fixed::operator-(int const &rhs) {

	return this->toFloat() - rhs;
}

// * Operator

Fixed Fixed::operator*(Fixed const &rhs) {

	return this->toFloat() * rhs.toFloat();
}

float Fixed::operator*(float const &rhs) {

	return this->toFloat() * rhs;
}

float Fixed::operator*(int const &rhs) {

	return this->toFloat() * rhs;
}

// / Operator

Fixed Fixed::operator/(Fixed const &rhs) {

	return this->toFloat() / rhs.toFloat();
}

float Fixed::operator/(float const &rhs) {

	return this->toFloat() / rhs;
}

float Fixed::operator/(int const &rhs) {

	return this->toFloat() / rhs;
}

// increment operator

Fixed &Fixed::operator--() {

	m_nb -= 1;
	return *this;
}

Fixed Fixed::operator--(int) {

	float prevNb = this->toFloat();
	m_nb -= 1;

	return prevNb;
}

Fixed &Fixed::operator++() {

	m_nb += 1;
	return *this;
}

Fixed Fixed::operator++(int) {

	float prevNb = this->toFloat();
	m_nb += 1;

	return prevNb;
}

std::ostream& operator<<(std::ostream& out, Fixed const &rhs) {

	out << rhs.toFloat();
	return out;
}
