#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a;
	cout << "Введите первое число: ";
	cin >> a;
	float b;
	cout << "Введите второе число: ";
	cin >> b;
	float avg = (a + b) / 2;
	cout << "среднее арифметическое чисел = " << avg;
	return 0;
}
 
