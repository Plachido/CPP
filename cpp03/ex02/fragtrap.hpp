#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "claptrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		void highFivesGuys();
};

#endif