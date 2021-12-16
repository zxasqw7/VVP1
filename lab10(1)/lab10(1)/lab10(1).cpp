#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int A, B, C;
	cout << "Введите целое число A: ";
	cin >> A;
	cout << "Введите целое число B: ";
	cin >> B;
	cout << "Введите целое число C: ";
	cin >> C;
	if (A < B && B < C)
		cout << "Истина";
	else
		cout << "Ложь";
	return 0;
}


