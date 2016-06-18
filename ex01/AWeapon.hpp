#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
private:
	std::string 	_name;
	int				_apcost;
	int				_damage;
	AWeapon(void);

public:
	//constructor
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon&		operator=(AWeapon const &obj);
	virtual 		~AWeapon(void);
	//getter
	std::string		getName(void) const;
	int				getAPCost(void) const;
	int				getDamage(void) const;
	//setter
	void			setName(std::string name);
	void			setAPCost(int apcost);
	void			setDamage(int damage);
	//method
	virtual void	attack(void) const = 0;	
	/* data */
};

#endif