#include "Bureaucrat.hpp"
#include <iostream>

int		main(void)
{
	Bureaucrat	a("Roger", 3);
	Bureaucrat  b = a;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b.setGrade(155);
	return (0);
}