#pragma once
#include "Challenges.h"
class Business : public Challenges
{
private:
	int goods;
	int price;
public:
	Business();
	~Business();
	void Nhap();
	int getTotal() const;
	bool isBeated(Prince*);
};

