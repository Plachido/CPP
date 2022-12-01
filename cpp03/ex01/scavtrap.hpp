#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "claptrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);
		void guardGate();
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & cl );

#endif