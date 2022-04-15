#ifndef CPP_MODULE02_FIXED_HPP
#define CPP_MODULE02_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	public:
		Fixed();
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const & src);
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt() const;
		float toFloat() const;

		static float min(Fixed &a, Fixed &b);
		static float max(Fixed &a, Fixed &b);
		static float min(Fixed const &a, Fixed const &b);
		static float max(Fixed const &a, Fixed const &b);

		Fixed& operator=(Fixed const &rhs);

		bool operator==(Fixed const &rhs) const;
		bool operator==(float const &rhs) const;
		bool operator==(int const &rhs) const;

		bool operator!=(Fixed const &rhs) const;
		bool operator!=(float const &rhs) const;
		bool operator!=(int const &rhs) const;

		bool operator>(Fixed const &rhs) const;
		bool operator>(float const &rhs) const;
		bool operator>(int const &rhs) const;

		bool operator>=(Fixed const &rhs) const;
		bool operator>=(float const &rhs) const;
		bool operator>=(int const &rhs) const;

		bool operator<(Fixed const &rhs) const;
		bool operator<(float const &rhs) const;
		bool operator<(int const &rhs) const;

		bool operator<=(Fixed const &rhs) const;
		bool operator<=(float const &rhs) const;
		bool operator<=(int const &rhs) const;

		Fixed operator+(Fixed const &rhs);
		float operator+(float const &rhs);
		float operator+(int const &rhs);

		Fixed operator-(Fixed const &rhs);
		float operator-(float const &rhs);
		float operator-(int const &rhs);

		Fixed operator*(Fixed const &rhs);
		float operator*(float const &rhs);
		float operator*(int const &rhs);

		Fixed operator/(Fixed const &rhs);
		float operator/(float const &rhs);
		float operator/(int const &rhs);

		Fixed &operator--();
		Fixed operator--(int);
		Fixed &operator++();
		Fixed operator++(int);

	private:
		int m_nb;
		static int const m_floatPartBits;
};

std::ostream& operator<<(std::ostream& out, Fixed const &rhs);

#endif
