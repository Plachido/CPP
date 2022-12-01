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

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    if (this == &rhs)
        return (*this);
    std::cout << "ScavTrap Assignment operator called" << std::endl;
    ClapTrap::operator=(rhs);
    return (*this);
}

std::ostream & operator<<( std::ostream & o, ScavTrap const & cl )
{
    o << "ScavTrap " << cl.getName() << " has " << cl.getHitpoints();
    o << " Hit points, " << cl.getEnergy_points() << " Energy points and";
    o << cl.getAttack_damage() << " Attack damage" << std::endl;
    return o;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src )
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}