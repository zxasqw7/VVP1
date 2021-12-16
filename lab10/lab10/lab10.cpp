#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int A, B;
	cout << "Введите целое чилсло A:";
	cin >> A;
	cout << "Введите целое число B:";
	cin >> B;
	if (A > 2 && B <= 3)
		cout << "Число A > 2 и число B <= 3";
	else
		cout << "Высказывание A > 2 и B <=3 не верно";
	return 0;
}
