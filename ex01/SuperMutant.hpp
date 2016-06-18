#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	//Coplien
	SuperMutant(void);
	SuperMutant(SuperMutant const &obj);
	virtual ~SuperMutant(void);
	SuperMutant& operator=(SuperMutant const &obj);
	//Method
	virtual void takeDamage(int dmg);
	/* data */
};

#endif