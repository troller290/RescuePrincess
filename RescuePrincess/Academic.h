#pragma once
#include "Challenges.h"
class Academic : public Challenges
{
private:
	int Quest_IQ;
public:
	Academic();
	~Academic();
	void Nhap();
	int getQUESTIQ() const;
	bool isBeated(Prince*);
};

