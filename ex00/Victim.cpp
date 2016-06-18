#include "Victim.hpp"

Victim::Victim(void):
_name("noting")
{
	std::cout << "This construtor should never be called" << std::endl;
	return;
}

Victim::Victim(std::string name):
_name(name)
{
	std::cout << "Some random victim called " << this->getName() << " just popped !" << std::endl;
	return ;
}

Victim&		Victim::operator=(Victim const &obj)
{
	std::cout << "Assignation Victim called" << std::cout;
	this->setName(obj.getName());
	return (*this);
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->getName() << " just died for no apparent reason !" << std::endl;
	return;
}

// Getter

std::string		Victim::getName(void) const
{
	return this->_name;
}

// Setter

void		Victim::setName(std::string name)
{
	this->_name = name;
}

// function

void	Victim::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}

// output

std::ostream&	operator<<(std::ostream &o, Victim const &obj)
{
	o << "I'm " << obj.getName() << " and I like otters !";
	return o;
}