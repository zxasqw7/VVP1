#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите число a: ";
	cin >> a;
	if (a > 0 && a % 2 == 0)
	{
		cout << "Число " << a << " положительное и четное";
	}
	else if (a > 0 && a % 2 != 0) 
	{
		cout << "Число " << a << " положительное и нечетное";
	}
	else if (a < 0 && a % 2 == 0)
	{
		cout << "Число " << a << " отрицательное и четное";
	}
	else if (a < 0 && a % 2 != 0)
	{
		cout << "Число " << a << " отрицательное и нечетное";
	}
	return 0;
}