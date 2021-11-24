#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int A, B, C, buff;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B : ";
	cin >> B;
	cout << "Введите значение C : ";
	cin >> C;
	buff = A;
	A = C;
	C = B;
	B = buff;
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C;
	return 0;
}