#ifndef CPP_MODULE02_FIXED_HPP
#define CPP_MODULE02_FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();

		Fixed& operator=(Fixed const &rhs);

		int getRawBits() const;
		void setRawBits(int const raw);

	private:
		int m_nb;
		static int const m_floatPartBits;
};

std::ostream& operator<<(std::ostream& out, Fixed const &rhs);

#endif
