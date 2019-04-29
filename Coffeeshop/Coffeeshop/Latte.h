#pragma once
#include "ShopItem.h"
class Latte:public ShopItem
{
public:
	Latte();
	Latte(const Latte& _latte);
	~Latte();
	static int s_instances;
};

