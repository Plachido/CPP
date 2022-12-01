#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class wrongAnimal
{
	protected:
		std::string type;
	public:
		wrongAnimal();
		wrongAnimal(wrongAnimal const & src);
		~wrongAnimal();
		wrongAnimal &operator=(const wrongAnimal &other);
		std::string getType() const;
		void makeSound() const;
};

#endif