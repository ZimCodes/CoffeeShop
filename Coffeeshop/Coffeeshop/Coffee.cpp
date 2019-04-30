#include "pch.h"
#include "Coffee.h"
Coffee::Coffee()
{
	this->price = 1.00f;
	this->name = "coffee";
}
Coffee::Coffee(const Coffee& _coffee) {
}
Coffee::~Coffee()
{
}
