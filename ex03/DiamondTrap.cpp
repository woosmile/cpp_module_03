#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default")
{
	std::cout << "DiamondTrap : Default constructor called" << std::endl;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_scav_ep;
	_dmg = FragTrap::_dmg;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << "DiamondTrap : Name parameter constructor called" << std::endl;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_scav_ep;
	_dmg = FragTrap::_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap : Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap : Copy assignment operator called" << std::endl;
	_name = other._name;
	ClapTrap::_name = other.ClapTrap::_name;
	_hp = other._hp;
	_ep = other._ep;
	_dmg = other._dmg;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	if (_hp <= 0)
	{
		std::cout << "Not enough hit points" << std::endl;
	}
	else
	{
		std::cout << "DiamondTrap name : " << _name << std::endl;
		std::cout << "ClapTrap name : " << ClapTrap::_name << std::endl;
	}
}
