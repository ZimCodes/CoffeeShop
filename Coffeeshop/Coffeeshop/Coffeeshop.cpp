// Coffeeshop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Coffee.h"
#include "Doughnut.h"
#include "EggSandwich.h"
#include "Latte.h"

int main()
{
	Coffee * c1 = new Coffee();
	Coffee * c2 = new Coffee();
	Coffee * c3 = new Coffee();
	Doughnut * d1 = new Doughnut();
	EggSandwich * e1 = new EggSandwich();
	Latte * l1 = new Latte();

	c1->DisplayName(true);
	std::cout << c1->GetPrice() << "\n";

	d1->DisplayName(true);
	std::cout << d1->GetPrice() << "\n";

	c2->DisplayName(true);
	std::cout<<c2->GetPrice() << "\n";

	c3->DisplayName(true);
	std::cout << c3->GetPrice() << "\n";

	std::cout << EggSandwich::s_instances<<std::endl;
	std::cout << Latte::s_instances << std::endl;
}
