#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	private:
		int _val;
		static const int _fract = 8;
	public:
		Fixed(); // constructor
		Fixed(const int num); // new constructor, converts int to fixed point value
		Fixed(const float num); // new constructor, converts float to fixed point value
		Fixed(const Fixed &f); // copy constructor
		Fixed & operator=(Fixed const &f); // assignment operator
		int getRawBits(void) const; // const after declaration makes it a compiler error for this class function to change a member variable of the class.
		void setRawBits(int const raw);
		~Fixed(void);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &f);


#endif