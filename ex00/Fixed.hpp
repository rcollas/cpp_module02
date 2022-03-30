#ifndef CPP_MODULE02_FIXED_HPP
#define CPP_MODULE02_FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const & src);
		~Fixed();

		Fixed& operator=(Fixed const &rhs);
		float toFloat() const;
		int toInt() const;

		float m_nb;
	private:
};

std::ostream& operator<<(std::ostream& out, Fixed const &rhs);

#endif
