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

		Fixed& operator=(Fixed const &rhs);

		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt() const;
		float toFloat() const;

	private:
		int m_nb;
		static int const m_floatPartBits;
};

std::ostream& operator<<(std::ostream& out, Fixed const &rhs);

#endif
