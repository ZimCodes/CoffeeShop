#pragma once
#include <string>
class ShopItem
{
public:
	ShopItem();
	ShopItem(const ShopItem& _shopitem);//copy ctr
	~ShopItem();
	virtual float GetPrice();
	std::string GetName();
protected:
	float price;
	std::string name;
};

