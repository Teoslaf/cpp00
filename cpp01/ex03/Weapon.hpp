#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
	std::string type;

public:
	Weapon(const char *type);
	~Weapon();
	const std::string &getType() const;
	void setType(const std::string &newType);
};
#endif
