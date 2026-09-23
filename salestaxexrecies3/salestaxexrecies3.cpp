#include <iostream>

int main()
{
	double purchasprice = 95;
	double salestax = 0.065;
	double countytax = 0.02;
	double totaltax = purchasprice*(salestax + countytax);
	double totalprice = purchasprice + totaltax;
	std::cout << "purchase price: $" << purchasprice << std::endl;
	std::cout << "total tax: $" << totaltax << std::endl;
	std::cout << "total price: $" << totalprice << std::endl;
	return 0;
}