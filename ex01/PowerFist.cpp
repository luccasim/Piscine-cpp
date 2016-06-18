#include "PowerFist.hpp"

PowerFist::PowerFist(void):
AWeapon("PowerFist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(PowerFist const &obj):
AWeapon(obj)
{ 
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist&	PowerFist::operator=(PowerFist const &obj)
{
	AWeapon::operator=(obj);
	return *this;
}

//Method

void		PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}