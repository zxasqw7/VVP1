#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "ru");
	int A, B;
	cout << " Введите целое число A: ";
	cin >> A;
	cout << "Введите целое число B: ";
	cin >> B;
	if (A > B) 
	{
		B = A;
		cout << "A = " << A << endl << "B = " << B;
	}
	else if (B > A) 
	{
		A = B;
		cout << "A = " << A << endl << "B = " << B;
	}
	else 
	{
		A = 0;
		B = 0;
		cout << "A = " << A << endl << "B = " << B;
	}
	return 0;
}
