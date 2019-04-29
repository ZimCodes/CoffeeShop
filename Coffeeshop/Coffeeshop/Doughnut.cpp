#include "pch.h"
#include "Doughnut.h"

Doughnut::Doughnut()
{
	this->price = 3.22f;
	this->name = "doughnut";
	s_instances++;
}
Doughnut::Doughnut(const Doughnut& _doughnut) 
{
}
Doughnut::~Doughnut()
{
}
int Doughnut::s_instances = 0;
