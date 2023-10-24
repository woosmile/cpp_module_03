#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "ClapTrap : Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "ClapTrap : Name parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap : Copy assignment operator called" << std::endl;
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_dmg = other._dmg;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
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
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _dmg << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << _name << " Energy Points : " << _ep << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points" << std::endl;
	}
	else
	{
		if (_hp >= amount)
		{
			_hp = _hp - amount;
		}
		else
		{
			_hp = 0;
		}
		std::cout << "ClapTrap takes " << amount << " damage" << std::endl;
		std::cout << "ClapTrap " << _name << " Hit Points : " << _hp << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep <= 0 && _hp <= 0)
		std::cout << "Not enough energy and hit points" << std::endl;
	else if (_ep <= 0)
		std::cout << "Not enough energy" << std::endl;
	else if (_hp <= 0)
		std::cout << "Not enough hit points" << std::endl;
	else
	{
		_hp = _hp + amount;
		_ep--;
		std::cout << "ClapTrap repaired Hit Points by " << amount << std::endl;
		std::cout << "ClapTrap " << _name << " Hit Points : " << _hp << std::endl;
		std::cout << "ClapTrap " << _name << " Energy Points : " << _ep << std::endl;
	}
}