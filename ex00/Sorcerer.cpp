#include "Sorcerer.hpp"

//Canonical form

Sorcerer::Sorcerer(void)
{
	std::cout << "Sorcerer Defautl constructor called" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &obj):
_name(obj.getName()),
_title(obj.getTitle())
{
	std::cout << "Sorcerer copy constructor called" << std::endl;	
	return;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequence will never be the same !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title):
_name(name),
_title(title)
{
	std::cout << this->getName() << ", " << this->getTitle() << " is born !" << std::endl;
	return ;
}

Sorcerer&	Sorcerer::operator=(Sorcerer const &obj)
{
	std::cout << "Sorcerer assignation called." << std::endl;
	if (this != &obj)
	{
		this->setName(obj.getName());
		this->setTitle(obj.getTitle());
	}
	return *this;
}
// Getter

std::string	Sorcerer::getName(void) const
{
	return this->_name;
}

std::string Sorcerer::getTitle(void) const
{
	return this->_title;
}

// Setter

void		Sorcerer::setName(std::string name)
{
	this->_name = name;
}

void		Sorcerer::setTitle(std::string title)
{
	this->_title = title;
}
// function

void		Sorcerer::polymorph(Victim const &obj)
{
	obj.getPolymorphed();
}

// Output

std::ostream&	operator<<(std::ostream &o, Sorcerer const &obj)
{
	o << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}