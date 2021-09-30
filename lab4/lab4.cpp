#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a;
	int b;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	int S = a * b;
	cout << "S = " << S << endl;
	int P = 2 * (a + b);
	cout << "P = " << P;
	return 0;
}
