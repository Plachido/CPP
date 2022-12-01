#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();
		Dog &operator=(const Dog &other);
		void makeSound() const;
		Brain *getBrain() const;
};

#endif