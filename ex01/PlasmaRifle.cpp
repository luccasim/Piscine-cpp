#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) :
AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &obj):
AWeapon(obj)
{
	return ;
}

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const &obj)
{
	AWeapon::operator=(obj);
	return *this;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "*Piouuuu Piouuuu Piouuuu*" << std::endl;
	return ;
}