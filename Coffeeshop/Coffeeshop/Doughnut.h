#pragma once
#include "ShopItem.h"
class Doughnut:public ShopItem
{
public:
	Doughnut();
	Doughnut(const Doughnut& _doughnut);
	~Doughnut();
	static int s_instances;
};

