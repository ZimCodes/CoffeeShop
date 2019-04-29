#pragma once
#include <string>
class ShopItem
{
public:
	ShopItem();
	ShopItem(const ShopItem& _shopitem);//copy ctr
	~ShopItem();
	virtual void DisplayName(bool _isplural) const;
	virtual float GetPrice();
	
protected:
	float price;
	std::string name;
};

