#ifndef HUMAN_HPP
# define HUMAN_HPP

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void attack(void);
};

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack(void);
};


#endif