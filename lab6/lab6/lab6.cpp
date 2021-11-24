#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int A, B, buff;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B : ";
	cin >> B;
	buff = A;
	A = B;
	B = buff;
	cout << "A = " << A << endl;
	cout << "B = " << B;
	return 0;
}