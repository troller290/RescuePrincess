#pragma once
#include "iostream"
#include "Prince.h"
using namespace std;
class Challenges
{
protected:
	string gate_keeper;
public:
	virtual void Nhap() = 0;
	virtual bool isBeated(Prince*) = 0;
	string getName();
};

