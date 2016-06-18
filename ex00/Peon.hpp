#ifndef	PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : virtual public Victim
{
private:
	Peon(void);

public:
	Peon(std::string name);
	Peon(Peon const &obj);
	~Peon(void);
	Peon&	operator=(Peon const &obj);
	// function
	virtual void		getPolymorphed(void) const;
};

#endif