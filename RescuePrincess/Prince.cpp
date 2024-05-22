#include "Prince.h"

Prince::Prince()
{
	name = "";
	budget = IQ = strength = 0;
}

Prince::~Prince()
{}

Prince::Prince(std::string ten, int tien, int iq, int sm)
{
	name = ten;
	budget = tien;
	IQ = iq;
	strength = sm;
}

void Prince::StatShow() const
{
	cout << "\t=====THONG TIN HOANG TU====\t\n";
	cout << "Hoang Tu co ten la: " << name << endl;
	cout << "Hoang Tu con " << budget << " tien" << endl;
	cout << "Hoang Tu co " << IQ << " IQ" << endl;
	cout << "Hoang Tu co " << strength << " suc manh" << endl;
}

void Prince::setBudget(int tien)
{
	this->budget = tien;
}

void Prince::setIQ(int iq)
{
	this->IQ = iq;
}

void Prince::setStrength(int sm)
{
	this->strength = sm;
}

int Prince::getBudget() const
{
	return budget;
}

int Prince::getIQ() const
{
	return IQ;
}

int Prince::getStrength() const
{
	return strength;
}