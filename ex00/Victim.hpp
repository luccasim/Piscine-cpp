#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
private:
	std::string		_name;
	Victim(void);
public:
	// Constructor
	Victim(std::string name);
	Victim(Victim const &obj);
	~Victim(void);
	Victim&	operator=(Victim const &obj);
	// getter
	std::string	getName(void) const;
	// setter
	void		setName(std::string name);
	// function
	void		getPolymorphed(void) const;
	/* data */
};

std::ostream&	operator<<(std::ostream &o, Victim const &obj);

#endif