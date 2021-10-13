#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a;
	cout << "Введите первое число (ненулевое): ";
	cin >> a;
	float b;
	cout << "Введите второе число (ненулевое): ";
	cin >> b;
	float summ;
	summ = abs(a) + abs(b);
	cout << "Сумма модулей = " << summ << endl;
	float diff;
	diff = abs(a) - abs(b);
	cout << "Разность модулей = " << diff << endl;
	float mult;
	mult = abs(a) * abs(b); 
	cout<< "Произведение модулей = " << mult << endl;
	float div;
	div = abs(a) / abs(b);
	cout << "Частное модулей = " << div;
	return 0;
}
