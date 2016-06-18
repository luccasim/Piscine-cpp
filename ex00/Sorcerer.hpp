#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string		_name;
	std::string		_title;
	Sorcerer(void);
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &obj);
	Sorcerer&	operator=(Sorcerer const &obj);
	~Sorcerer(void);
	//getter
	std::string		getName(void) const;
	std::string		getTitle(void) const;
	//setter
	void			setName(std::string name);
	void			setTitle(std::string name);
	//function
	void			polymorph(Victim const &obj);
};

std::ostream&	operator<<(std::ostream &o, Sorcerer const &obj);

#endif