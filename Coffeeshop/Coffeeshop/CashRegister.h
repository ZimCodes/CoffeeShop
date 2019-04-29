#pragma once
#include "Shopitem.h"
#include <vector>
class CashRegister
{
public:
	CashRegister();
	CashRegister(const CashRegister& _cashregister);
	~CashRegister();
	void AddItemToCheckout(ShopItem* _item);
	void ClearCheckout();
	float GetTotalPrice();
private:
	std::vector<ShopItem*> m_checkoutItems;
	float m_roundHundredth(float _num);
};

