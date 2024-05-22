#pragma once
#include "iostream"
#include "vector"
#include "Challenges.h"
#include "Prince.h"
using namespace std;
class Game
{
private:
	Prince* prince;
	vector<Challenges*> gates;
public:
	void NhapDS();
	void GiaiCuu();
};

