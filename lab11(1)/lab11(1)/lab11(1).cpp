#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");
	int a, b, c, summ;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "Введите число c: ";
	cin >> c;
	if (a <= b && a <= c) 
	{
		summ = b + c;
		cout << b << "+" << c << "=" << summ;
	}
	else if (b <= a && b <= c) {
		summ = a + c;
		cout << a << "+" << c << "=" << summ;
	}
	else if (c <= a && c <= b) {
		summ = a + b;
		cout << a << "+" << b << "=" << summ;
	}
	return 0;
}

