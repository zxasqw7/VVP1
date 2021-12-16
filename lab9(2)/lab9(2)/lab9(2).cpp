#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int k, n, x;
	cout << "введите номер дня недели(1-365):";
	cin >> k;
	if (k < 1 || k>365)
	{
		cout << "номер дня недели должен находиться в промежутке(1-365)";
	}
	else
	{
		cout << "введите день недели(1-7):";
		cin >> n;
		if (n < 1 || n>7)
		{
			cout << "день недели должен находиться в промежутке(1-7)";
		}
		else
		{
			n -= 2;
			x = ((k + n) % 7) + 1;
			cout << "номер дня недели:" << x;
		}
	}
	return 0;
}