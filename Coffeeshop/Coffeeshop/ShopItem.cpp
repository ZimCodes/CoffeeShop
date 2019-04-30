#include "pch.h"
#include "ShopItem.h"

ShopItem::ShopItem()
{
}
ShopItem::ShopItem(const ShopItem& _shopitem) {

}
ShopItem::~ShopItem()
{
}
float ShopItem::GetPrice() {
	return this->price;
}
std::string ShopItem::GetName() {
	return this->name;
}
