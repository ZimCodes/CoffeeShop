#pragma once
#include "ShopItem.h"
class Coffee : public ShopItem
{
public:
	Coffee();
	Coffee(const Coffee& _coffee);
	~Coffee();
};

