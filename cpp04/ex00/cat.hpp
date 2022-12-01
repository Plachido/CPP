#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>

#include "animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & src);
		~Cat();
		Cat &operator=(const Cat &other);
		void makeSound() const;
};

#endif