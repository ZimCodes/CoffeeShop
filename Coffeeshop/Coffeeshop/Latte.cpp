#include "pch.h"
#include "Latte.h"


Latte::Latte()
{
	this->price = 2.55f;
	this->name = "latte";
	s_instances++;
}
Latte::Latte(const Latte& _latte) 
{
}
Latte::~Latte()
{
}
int Latte::s_instances = 0;
