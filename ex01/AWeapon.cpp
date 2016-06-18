#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
_name(name),
_apcost(apcost),
_damage(damage)
{
	return ;
}

AWeapon::~AWeapon(void)
{
	return;
}

AWeapon&	AWeapon::operator=(AWeapon const &obj)
{
	this->_name = obj.getName();
	this->_damage = obj.getDamage();
	this->_apcost = obj.getAPCost();
	return *this;
}

// Getter

std::string		AWeapon::getName(void) const
{
	return this->_name;
}

int				AWeapon::getDamage(void) const
{
	return this->_damage;
}

int				AWeapon::getAPCost(void) const
{
	return this->_apcost;
}

// Setter

void			AWeapon::setName(std::string name)
{
	this->_name = name;
}

void			AWeapon::setDamage(int damage)
{
	this->_damage = damage;
}

void			AWeapon::setAPCost(int apcost)
{
	this->_apcost = apcost;
}