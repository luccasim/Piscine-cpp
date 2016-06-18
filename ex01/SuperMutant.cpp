#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void):
Enemy("SuperMutant", 170)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &obj):
Enemy(obj)
{
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant&	SuperMutant::operator=(SuperMutant const &obj)
{
	Enemy::operator=(obj);
	return *this;
}

// Method

void			SuperMutant::takeDamage(int dmg)
{
	dmg -= 3;
	if (dmg > 0)
		this->setHP(this->getHP() - dmg);
}