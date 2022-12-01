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
		ClapTrap(ClapTrap const & src);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setName(std::string name);
		void setHit(unsigned int amount);
		void setEnergy(unsigned int amount);
		void setDamage(unsigned int amount);
		std::string getName() const;
		int getHitpoints() const;
		int getEnergy_points() const;
		int getAttack_damage() const;
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & rhs);
};

std::ostream & operator<<( std::ostream & o, ClapTrap const & cl);

#endif