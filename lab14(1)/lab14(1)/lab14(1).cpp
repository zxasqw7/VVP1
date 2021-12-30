#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, buff;
	cout << "Введите отрезок A: ";
	cin >> a;
	cout << "Введите отрезок B (B<A): ";
	cin >> b;

	buff = a;
	while (buff >= b) 
	{
		buff -= b;
	}
	cout << buff ;
}