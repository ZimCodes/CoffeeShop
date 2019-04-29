#pragma once
#include "ShopItem.h"

class EggSandwich:public ShopItem
{
public:
	EggSandwich();
	EggSandwich(const EggSandwich& _eggsandwich);
	~EggSandwich();
	void DisplayName(bool _isplural) const;
	static int s_instances;
};

