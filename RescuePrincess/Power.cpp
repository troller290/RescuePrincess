#include "Power.h"

Power::Power()
{
	Yuusha_Power = 0;
}

Power::~Power()
{}

void Power::Nhap()
{
	gate_keeper = "Yuusha";
	cout << "Nhap chi so suc manh cua dung si: ";
	cin >> Yuusha_Power;
	cout << "---------------------------\n";
}

int Power::getYuushaPower() const
{
	return Yuusha_Power;
}

bool Power::isBeated(Prince* prince)
{
	int damage = this->getYuushaPower();
	int sucmanh = prince->getStrength();
	if (sucmanh >= damage)
	{
		sucmanh -= damage;
		prince->setStrength(sucmanh);
		return true;
	}
	return false;
}