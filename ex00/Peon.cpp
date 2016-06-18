#include "Peon.hpp"

Peon::~Peon(void)
{
	std::cout << "Bleuark" << std::endl;
	return ;
}

Peon::Peon(std::string name):
Victim(name)
{
	std::cout << "Zog Zog" << std::endl;
	return ;
}

Peon&	Peon::operator=(Peon const &obj)
{
	this->setName(obj.getName());
	return *this;
}

// function

void		Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << "  has turned into a pink poney !" << std::endl;
}