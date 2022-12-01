#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const & src);
		~Brain();
		Brain &operator=(const Brain &other);
		std::string ideas[100];
};


#endif