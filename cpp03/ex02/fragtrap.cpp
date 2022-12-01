# include "fragtrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{

	std::cout << "FragTrap constructor called" << std::endl;
	this->setName(name);
	this->setHit(100);
	this->setEnergy(100);
	this->setDamage(30);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << (this->getName()) << " desperatly asks for a high five" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src )
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}