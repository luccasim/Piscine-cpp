#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	// Coplien
	PowerFist(void);
	PowerFist(PowerFist const & obj);
	~PowerFist(void);
	PowerFist& operator=(PowerFist const &obj);
	//Method
	virtual void	attack(void) const;
};

#endif