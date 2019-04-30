#pragma once
#include "CashRegister.h"
class Cashier
{
public:
	Cashier(CashRegister *_register);
	~Cashier();
	//cashier functions
	void DisplayWelcome() const;
	void DisplayintroMSG() const;
	void AskForMoreMSG() const;
	void AskHowMany() const;
	void DisplayTotal();
	void DisplayItemAmount();
	void DisplayEndMSG() const;
	//register functions
	void AddItemToCheckout(ShopItem *_item);
	void ResetCheckout();
private:
	CashRegister * m_register;
	int m_donutNum;
	int m_eggsandwichNum;
	int m_latteNum;
	int m_coffeeNum;
};

