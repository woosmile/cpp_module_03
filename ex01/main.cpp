#include "ScavTrap.hpp"

void	tester(ScavTrap &test)
{
	std::string	target = "Enemy";

	test.attack(target);
	test.attack(target);
	test.attack(target);
	test.attack(target);
	test.attack(target);

	test.beRepaired(0);
	test.beRepaired(10);
	test.beRepaired(10);
	test.beRepaired(10);
	test.beRepaired(10);
	test.beRepaired(10);

	test.takeDamage(0);
	test.takeDamage(32);
	test.takeDamage(51);
	test.takeDamage(100);
	test.takeDamage(200);

	test.attack(target);
	test.beRepaired(10);
	test.guardGate();

	std::cout << std::endl;
}

int	main(void)
{
	ScavTrap	a("A PLAYER");
	ScavTrap	b("B PLAYER");
	ScavTrap	c("C PLAYER");
	ScavTrap	c_copy(c);

	std::cout << "A PLAYER" << std::endl;
	tester(a);

	std::cout << "B PLAYER : use Copy assignment operator" << std::endl;
	a = b;
	tester(a);
	
	std::cout << "C PLAYER : use Copy constructor" << std::endl;
	tester(c_copy);

	return (0);
}