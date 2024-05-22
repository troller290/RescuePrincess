#pragma once
#include "iostream"
using namespace std;
class Prince
{
private:
	std::string name;
	int budget;
	int IQ;
	int strength;
public:
	Prince();
	~Prince();
	Prince(std::string, int, int, int);

	void StatShow() const;

	int getBudget() const;
	int getIQ() const;
	int getStrength() const;

	void setBudget(int);
	void setIQ(int);
	void setStrength(int);
};

