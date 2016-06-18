#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer 	a("titi", "Mage");
	Sorcerer 	*b = new Sorcerer("toto", "Novice");
	Victim		c("Roger");
	Peon		d("Thrall");

	std::cout << a << std::endl;
	std::cout << *b << std::endl;
	std::cout << c << std::endl;
	delete b;
	a.polymorph(c);
	a.polymorph(d);
	return (0);
}