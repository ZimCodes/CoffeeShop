#include "pch.h"
#include "Coffee.h"
Coffee::Coffee()
{
	this->price = 1.00f;
	this->name = "coffee";
	s_instances++;
}
Coffee::Coffee(const Coffee& _coffee) {
}
Coffee::~Coffee()
{
}
int Coffee::s_instances = 0;
