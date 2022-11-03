#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

void randomChump(std::string name);

class Zombie
{
	private:
		std::string name;
	public:
		void  announce();
		Zombie(std::string name);
		~Zombie(void);
};

Zombie* newZombie(std::string name);

#endif