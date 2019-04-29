#include "pch.h"
#include "ShopItem.h"
#include <iostream>

ShopItem::ShopItem()
{
}
ShopItem::ShopItem(const ShopItem& _shopitem) {

}
ShopItem::~ShopItem()
{
}
void ShopItem::DisplayName(bool _isplural) const {
	if (_isplural) {
		std::cout << this->name + "s";
	}
	else {
		std::cout << this->name;
	}
}
float ShopItem::GetPrice() {
	return this->price;
}
