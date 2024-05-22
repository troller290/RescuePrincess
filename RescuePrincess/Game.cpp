#include "Game.h"
#include "Business.h"
#include "Academic.h"
#include "Power.h"
#include "Prince.h"
#include "string"
void Game::NhapDS()
{
	int n;
	cout << "Nhap so luong cong thu thach: ";
	cin >> n;
	int choose;
	for (int i = 0; i < n; i++)
	{
		cout << "Chon cong 1(Business), 2(Academic), 3(Power): ";
		cin >> choose;
		if (choose == 1)
		{
			cout << "\t====NHAP THONG TIN BUSINESS GATE====\t\n";
			Challenges* input = new Business;
			input->Nhap();
			gates.push_back(input);
		}
		else if (choose == 2)
		{
			cout << "\t====NHAP THONG TIN ACADEMIC GATE====\t\n";
			Challenges* input = new Academic;
			input->Nhap();
			gates.push_back(input);
		}
		else if (choose == 3)
		{
			cout << "\t====NHAP THONG TIN POWER GATE====\t\n";
			Challenges* input = new Power;
			input->Nhap();
			gates.push_back(input);
		}
	}
	string ten;
	int money, smart, power;
	cin.ignore();
	cout << "Nhap ten cua Hoang Tu: "; getline(cin, ten);
	cout << "Nhap tien cua Hoang Tu: "; cin >> money;
	cout << "Nhap chi so IQ cua Hoang Tu: "; cin >> smart;
	cout << "Nhap suc manh cua Hoang Tu: "; cin >> power;

	prince = new Prince(ten, money, smart, power);

}

void Game::GiaiCuu()
{
	int count = 0;
	for (int i = 0; i < gates.size(); i++)
	{
		if (gates[i]->isBeated(prince))
		{
			count++;
		}
	}

	if (count == gates.size())
	{
		cout << "\nHoang Tu da giai cuu duoc cong chua" << endl;
		prince->StatShow();
	}
	else cout << "\nHoang Tu qua non, ve luyen them di" << endl;
}