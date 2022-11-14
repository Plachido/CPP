#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "claptrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();
};

#endif