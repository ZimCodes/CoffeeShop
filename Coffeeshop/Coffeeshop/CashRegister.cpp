#include "pch.h"
#include "CashRegister.h"
#include <cmath>
CashRegister::CashRegister()
{
}
CashRegister::CashRegister(const CashRegister& _cashregister)
{
}
CashRegister::~CashRegister()
{
}
void CashRegister::AddItemToCheckout(ShopItem* _item) {
	m_checkoutItems.push_back(_item);
}
void CashRegister::ClearCheckout() {
	//deallocate memory for all shopitems
	for (int i = 0; i < m_checkoutItems.size();i++) {
		if (m_checkoutItems[i] != NULL) {
			delete m_checkoutItems[i];
		}
		m_checkoutItems[i] = 0;
	}
	m_checkoutItems.clear();
}
float CashRegister::GetTotalPrice() {
	float total = 0;
	if (m_checkoutItems.size() > 0) {
		for (int i = 0; i < m_checkoutItems.size(); i++) {
			total += m_checkoutItems[i]->GetPrice();
		}
	}
	total = m_roundHundredth(total);
	return total;
}
float CashRegister::m_roundHundredth(float _num) {
	return roundf(_num * 100) / 100;
}
