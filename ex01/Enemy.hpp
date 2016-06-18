#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
private:
	std::string		_type;
	int				_hp;
public:
	// Coplien
	Enemy(void);
	Enemy(std::string type, int hp);
	Enemy(Enemy const &obj);
	virtual ~Enemy(void);
	Enemy&	operator=(Enemy const &o);
	// Getter
	std::string		getType(void) const;
	int				getHP(void) const;
	// Setter
	void			setType(std::string name);
	void			setHP(int hp);
	// Method
	virtual void takeDamage(int dmg);
};

#endif