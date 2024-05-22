#include "Business.h"

Business::Business()
{
	price = goods = 0;
}

Business::~Business()
{}

void Business::Nhap()
{
	gate_keeper = "Drug dealer";
	cout << "Nhap gia tri hang hoa: "; cin >> price;
	cout << "Nhap so luong hang hoa: "; cin >> goods;
	cout << "---------------------------\n";
}

int Business::getTotal() const
{
	return goods * price;
}

bool Business::isBeated(Prince* prince)
{
	int total = this->getTotal();
	int prince_budget = prince->getBudget();
	if (prince_budget >= total)
	{
		prince_budget -= total;
		prince->setBudget(prince_budget);
		return true;
	}
	return false;
}