#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal(Animal const & src);
	public:
		virtual ~Animal();
		Animal &operator=(const Animal &other);
		std::string getType() const;
		virtual void makeSound() const;


};

#endif