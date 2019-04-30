#include "pch.h"
#include "Cashier.h"
#include "Coffee.h"
#include "Doughnut.h"
#include "EggSandwich.h"
#include "Latte.h"
#include <iostream>

Cashier::Cashier(CashRegister* _register)
{
	m_register = _register;
}
Cashier::~Cashier()
{
	//deallocate memory for cash register
	delete this->m_register;
	this->m_register = 0;
}
//welcome new customer
void Cashier::DisplayWelcome() const {
	std::cout << "Welcome to the Coffee Shop!\n";
}
void Cashier::DisplayintroMSG() const {
	std::cout << "What would you like to order?(1=donut,2=egg sandwich,3=coffee,4=latte)\n";
}
void Cashier::AskForMoreMSG() const {
	std::cout << "Do you want to anything else?(y=Yes,n=No)\n";
}
void Cashier::AskHowMany() const{
	std::cout << "How many would you like?\n";
}
//display total price from checkout
void Cashier::DisplayTotal(){
	std::cout << "Your total is $" << m_register->GetTotalPrice() <<"\n";
}
//Display current items on checkout
void Cashier::DisplayItemAmount() {
	std::cout << "You ordered ";
	if (m_donutNum > 0) {
		std::cout << m_donutNum <<" ";
		if (m_donutNum == 1) {
			std::cout << "doughnut ";
		}
		else {
			std::cout << "doughnuts ";
		}
	}
	if (m_eggsandwichNum > 0) {
		std::cout << m_eggsandwichNum << " ";
		if (m_eggsandwichNum == 1) {
			std::cout << "egg sandwich ";
		}
		else {
			std::cout << "egg sandwiches ";
		}

	}if (m_latteNum > 0) {
		std::cout << m_latteNum << " ";
		if (m_latteNum == 1) {
			std::cout << "latte ";
		}
		else {
			std::cout << "lattes ";
		}
	}if (m_coffeeNum > 0) {
		std::cout << m_coffeeNum << " ";
		if (m_coffeeNum == 1) {
			std::cout << "coffee ";
		}
		else {
			std::cout << "coffees ";
		}
	}
	std::cout << "\n";
}
void Cashier::DisplayEndMSG() const{
	std::cout << "<------Thank you and have a nice day!------>\n";
}
//add an item to checkout
void Cashier::AddItemToCheckout(ShopItem *_item) {
	if (_item->GetName() =="doughnut") {
		m_donutNum++;
	}
	else if (_item->GetName() == "egg sandwich") {
		m_eggsandwichNum++;
	}
	else if (_item->GetName() == "coffee") {
		m_coffeeNum++;
	}
	else if (_item->GetName() == "latte") {
		m_latteNum++;
	}
	m_register->AddItemToCheckout(_item);

}
//remove items added to checkout
void::Cashier::ResetCheckout() {
	m_register->ClearCheckout();
	m_donutNum = 0;
	m_coffeeNum = 0;
	m_eggsandwichNum = 0;
	m_latteNum = 0;
}
