# include "scavtrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{

	std::cout << "ScavTrap constructor called" << std::endl;
	this->setName(name);
	this->setHit(100);
	this->setEnergy(50);
	this->setDamage(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << (this->getName()) << " is now in Gate keeper mode" << std::endl;
}
