#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>

#include "animal.hpp"
#include "brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const & src);
		~Cat();
		Cat &operator=(const Cat &other);
		void makeSound() const;
		Brain* getBrain() const;

};

#endif