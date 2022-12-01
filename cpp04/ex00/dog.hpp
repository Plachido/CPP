#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

#include "animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();
		Dog &operator=(const Dog &other);
		void makeSound() const;
};

#endif