﻿#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int A;
	cout << "Введите четырехзначное чило: ";
	cin >> A;
	if (A < 999 || A > 9999)
	{
		cout << "Число должно быть четырехзначным: ";
	}
	else {
		if ((A % 10 == A / 1000 && A % 100 / 10 == A % 1000 / 100)) {
			cout << "число " << A << " читается слева направо и спарава налево одинаково";
		}
		else {
			cout << "число " << A << " читается слева направо и спарава налево не одинаково";
		}
	}
}

