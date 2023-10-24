#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default")
{
	std::cout << "ScavTrap : Default constructor called" << std::endl;
	_hp = 100;
	_ep = 50;
	_dmg = 20;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap : Name parameter constructor called" << std::endl;
	_hp = 100;
	_ep = 50;
	_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap : Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap : Copy assignment operator called" << std::endl;
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_dmg = other._dmg;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_ep <= 0 && _hp <= 0)
		std::cout << "Not enough energy and hit points" << std::endl;
	else if (_ep <= 0)
		std::cout << "Not enough energy" << std::endl;
	else if (_hp <= 0)
		std::cout << "Not enough hit points" << std::endl;
	else
	{
		_ep--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _dmg << " points of damage!" << std::endl;
		std::cout << "ScavTrap " << _name << " Energy Points : " << _ep << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (_hp <= 0)
		std::cout << "Not enough hit points" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is now on gate keeper mode." << std::endl;
}
