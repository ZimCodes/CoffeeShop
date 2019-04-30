#include "pch.h"
#include "EggSandwich.h"
#include <iostream>

EggSandwich::EggSandwich()
{
	this->price = 3.75f;
	this->name = "egg sandwich";
}
EggSandwich::EggSandwich(const EggSandwich& _eggsandwich) 
{
}
EggSandwich::~EggSandwich()
{
}
std::string EggSandwich::GetName() {
	return this->name;
}
