#include "pch.h"
#include "EggSandwich.h"
#include <iostream>

EggSandwich::EggSandwich()
{
	this->price = 3.75f;
	this->name = "egg sandwich";
	s_instances++;
}
EggSandwich::EggSandwich(const EggSandwich& _eggsandwich) 
{
}
EggSandwich::~EggSandwich()
{
}
void EggSandwich::DisplayName(bool _isplural) const{
	if (_isplural) {
		std::cout << this->name + "es";
	}
	else {
		std::cout << this->name;
	}
}
int EggSandwich::s_instances = 0;
