#include "Enemy.hpp"

Enemy::Enemy(void):
_type("unknow"),
_hp(0)
{
	return;
}

Enemy::Enemy(std::string type, int hp):
_type(type),
_hp(hp)
{
	return ;
}

Enemy::~Enemy(void)
{
	return;
}

Enemy::Enemy(Enemy const &obj)
{
	this->_type = obj.getType();
	this->_hp = obj.getHP();
}

Enemy&	Enemy::operator=(Enemy const &obj)
{
	this->_type = obj.getType();
	this->_hp = obj.getHP();
	return *this;
}

//Getter

std::string		Enemy::getType(void) const
{
	return this->_type;
}

int				Enemy::getHP(void) const
{
	return this->_hp;
}

//Setter

void			Enemy::setType(std::string name)
{
	this->_type = name;
}

void			Enemy::setHP(int hp)
{
	if (hp < 0)
		hp = 0;
	this->_hp = hp;
}

// Method

void			Enemy::takeDamage(int dmg)
{
	int newHp = this->getHP() - dmg;
	this->setHP(newHp);
}