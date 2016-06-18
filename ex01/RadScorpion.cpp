#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void):
Enemy("RadScorpion", 80)
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const &obj):
Enemy(obj)
{
	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion&	RadScorpion::operator=(RadScorpion const &o)
{
	Enemy::operator=(o);
	return *this;
}