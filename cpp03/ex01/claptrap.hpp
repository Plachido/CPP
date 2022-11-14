#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private:
		std::string _name;
		int _hit;
		int _energy;
		int _damage;

	public:
		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setName(std::string name);
		void setHit(unsigned int amount);
		void setEnergy(unsigned int amount);
		void setDamage(unsigned int amount);
		std::string getName();
		~ClapTrap(void);
};

#endif