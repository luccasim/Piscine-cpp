#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	AWeapon		*_weapon;
	std::string	_name;
	int			_ap;
	Character(void);
public:
	//Coplien
	Character(Character const &obj);
	virtual ~Character(void);
	Character& operator=(Character const &o);
	Character(std::string const &name);
	//Getter
	AWeapon*	getWeapon(void) const;
	std::string	getName(void) const;
	int			getAp(void) const;
	//Setter
	void		setWeapon(AWeapon *weapon);
	void		setName(std::string const &name);
	void		setAp(int ap);
	//funciton
	void		recoveryAP(void);
	void		equip(AWeapon *w);
	void		attack(Enemy *e);
	/* data */
};

std::ostream&	operator<<(std::ostream &o, Character const &obj);

#endif