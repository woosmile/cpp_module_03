#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("default")
{
	std::cout << "FragTrap : Default constructor called" << std::endl;
	_hp = 100;
	_ep = 100;
	_dmg = 30;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	std::cout << "FragTrap : Name parameter constructor called" << std::endl;
	_hp = 100;
	_ep = 100;
	_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap("default")
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap : Copy assignment operator called" << std::endl;
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_dmg = other._dmg;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (_hp <= 0)
		std::cout << "Not enough hit points" << std::endl;
	else
		std::cout << "FragTrap " << _name << " wants to give you a high five!" << std::endl;
}
