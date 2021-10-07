#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a;
	int b;
	cout << "Введите первую сторону треугольника: ";
	cin >> a;
	cout << "Введите вторую сторону треугольника: ";
	cin >> b;
	int S = a * b;
	cout << "S = " << S << endl;
	int P = 2 * (a + b);
	cout << "P = " << P;
	return 0;
}
