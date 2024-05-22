#include "Academic.h"

Academic::Academic()
{
	Quest_IQ = 0;
}

Academic::~Academic()
{}

void Academic::Nhap()
{
	gate_keeper = "Wise man";
	cout << "Nhap chi so cau hoi: ";
	cin >> Quest_IQ;
	cout << "---------------------------\n";
}

int Academic::getQUESTIQ() const
{
	return Quest_IQ;
}

bool Academic::isBeated(Prince* prince)
{
	int quest = this->getQUESTIQ();
	if (prince->getIQ() >= quest)
	{
		return true;
	}
	return false;
}