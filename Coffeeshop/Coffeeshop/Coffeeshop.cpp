// Coffeeshop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Coffee.h"
#include "Doughnut.h"
#include "EggSandwich.h"
#include "Latte.h"
#include "CashRegister.h"
#include "Cashier.h"
void AddToCheckout(Cashier& _cashier, int _input);
int main()
{
	CashRegister * cashregister = new CashRegister();
	Cashier * cashier = new Cashier(cashregister);
	int iteminput = 0;
	int amountinput = 0;
	char selectinput = ' ';
	//Welcome
	cashier->DisplayWelcome();
	std::cout << "\n\n";
	//--------------PLACE YOUR ORDER SECTION----------------------------
	while (selectinput != 'n') {
		//------choose item!-----
		iteminput = 0;
		while (iteminput < 1 || iteminput > 4)
		{
			cashier->DisplayintroMSG();
			std::cin >> iteminput;
		}
		//------how many of item?-----
		amountinput = 0;
		while (amountinput < 1) {
			cashier->AskHowMany();
			std::cin >> amountinput;
			for (int i = 0; i < amountinput; i++) {

				AddToCheckout(*cashier, iteminput);
			}
		}
		//------want something else?-----
		cashier->AskForMoreMSG();
		std::cin >> selectinput;
	}
	//--------------------CHECKOUT RESULTS-----------------------------------
	cashier->DisplayItemAmount();
	cashier->DisplayTotal();

	//---------------------CUSTOMER PAY FOR CHECKOUT------------------------
	bool iscorrectpay = false;
	while (!iscorrectpay) {
		cashier->AskForPayment();
		std::cin >> amountinput;
		if (!cashier->CheckPayment(amountinput)) {
			cashier->InvalidPayment();
		}
		else {
			iscorrectpay = true;
		}
	}
	cashier->DisplayEndMSG();
	
	

	//------------------------------MEMORY SECTION----------------------------------------------
	//pointer goes to null; [deallocation occurred inside Cashier for this register]
	cashregister = 0;
	//deallocate checkout shopitems
	cashier->ResetCheckout();
	//deallocate cashier
	delete cashier;
	cashier = 0;


}
void AddToCheckout(Cashier& _cashier, int _input) {
	switch (_input)
	{
	case 1:
		//Doughnut
		_cashier.AddItemToCheckout(new Doughnut());
		break;
	case 2:
		//Egg Sandwich
		_cashier.AddItemToCheckout(new EggSandwich());
		break;
	case 3:
		//Coffee
		_cashier.AddItemToCheckout(new Coffee());
		break;
	case 4:
		//Latte
		_cashier.AddItemToCheckout(new Latte());
		break;
	default:
		break;
	}
}
