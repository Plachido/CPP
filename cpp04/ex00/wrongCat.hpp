#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
	public:
		wrongCat();
		wrongCat(wrongCat const & src);
		~wrongCat();
		wrongCat &operator=(const wrongCat &other);
		void makeSound() const;
};

#endif