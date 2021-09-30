#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a;
	cout << "Введите a: ";
	cin >> a;
	float b;
	cout << "Введите b: ";
	cin >> b;
	float avg = (a + b) / 2;
	cout << "average = " << avg;
	return 0;
}
 
