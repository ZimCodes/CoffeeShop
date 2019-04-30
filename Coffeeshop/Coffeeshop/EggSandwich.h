#pragma once
#include "ShopItem.h"

class EggSandwich:public ShopItem
{
public:
	EggSandwich();
	EggSandwich(const EggSandwich& _eggsandwich);
	~EggSandwich();
	std::string GetName();
};

