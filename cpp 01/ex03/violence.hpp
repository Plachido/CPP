#ifndef VIOLENCE_HPP
# define VIOLENCE_HPP

# include <iostream>
# include "weapon.hpp"
# include "human.hpp"

class Weapon
{
	private:
		std::string type;
	public:
		const std::string getType(void);
		std::string setType(std::string type);
};

#endif