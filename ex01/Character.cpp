#include "Character.hpp"

Character::Character(std::string const &name):
_weapon(NULL),
_name(name),
_ap(40)
{
	return ;
}

Character::~Character(void)
{
	return ;
}

Character&	Character::operator=(Character const &o)
{
	this->_name = o.getName();
	this->_ap = o.getAp();
	this->_weapon = o.getWeapon();
	return *this;
}

Character::Character(Character const &o)
{
	this->_name = o.getName();
	this->_weapon = o.getWeapon();
	this->_ap = o.getAp();
	return ;
}

//Getter

AWeapon*		Character::getWeapon(void) const
{
	return this->_weapon;
}

std::string		Character::getName(void) const
{
	return this->_name;
}

int				Character::getAp(void) const
{
	return this->_ap;
}

//Setter

void			Character::setWeapon(AWeapon *w)
{
	this->_weapon = w;
}

void			Character::setName(std::string const &name)
{
	this->_name = name;
}

void			Character::setAp(int ap)
{
	if (ap >= 40)
		ap = 40;
	this->_ap =  ap;
}

//function

void			Character::recoveryAP(void)
{
	int	newap = this->getAp() + 10;

	this->setAp(newap);
}

void			Character::equip(AWeapon *w)
{
	this->setWeapon(w);
}

void			Character::attack(Enemy *e)
{
	if (!e){
		std::cout << "No enemy !" << std::endl;
		return ;
	}
	if (this->getWeapon() == 0)
	{
		std::cout << "No weapon, can't attack" << std::endl;
		return ;
	}
	else
	{
		AWeapon *weapon = this->getWeapon();

		std::cout << this->getName() << " attack " << e->getType() << " with a ";
		std::cout << weapon->getName() << std::endl;
		weapon->attack();
		e->takeDamage(weapon->getDamage());
		this->setAp(this->getAp() - weapon->getAPCost());
		if (e->getHP() == 0)
			delete e;
	}
}

std::ostream&	operator<<(std::ostream &o, Character const &obj)
{
	AWeapon *w = obj.getWeapon();

	if (w)
		o << obj.getName() << " has AP " << obj.getAp() << " and wields a " << w->getName() << std::endl;
	else
		o << obj.getName() << " has AP " << obj.getAp() << " and is unarmed" << std::endl;
	return o;
}