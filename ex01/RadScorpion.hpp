#ifndef	RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	//Coplien
	RadScorpion(void);
	RadScorpion(RadScorpion const &obj);
	virtual ~RadScorpion(void);
	RadScorpion&	operator=(RadScorpion const & obj);
	// Method
};

#endif