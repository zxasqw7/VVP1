#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	float a, b, res;
	cout << "Введите стоимость конфет за 1 килограмм: ";
	cin >> a;
	b = 0.1;
	while (b < 1.1)
	{
		res = a * b;
		cout << "Ценна за " << b << " килограмм конфет = " << res << endl;
		b = b + 0.1;
	}
	return 0;
}