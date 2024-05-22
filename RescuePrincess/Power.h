#pragma once
#include "Challenges.h"
class Power : public Challenges
{
private:
	int Yuusha_Power;
public:
	Power();
	~Power();
	void Nhap();
	int getYuushaPower() const;
	bool isBeated(Prince*);
};

