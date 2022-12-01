#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _val;
		static const int _fract = 8;
	public:
		Fixed(); // constructor
		Fixed(const Fixed &f); // copy constructor
		Fixed & operator=(Fixed const &f); // assignment operator
		int getRawBits(void) const; // const after declaration makes it a compiler error for this class function to change a member variable of the class.
		void setRawBits(int const raw);
		~Fixed(void);
};

#endif