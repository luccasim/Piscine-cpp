#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:


public:
	// Coplien
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & obj);
	~PlasmaRifle(void);
	PlasmaRifle&	operator=(PlasmaRifle const &obj);
	// Method
	virtual void attack(void) const;
};

#endif