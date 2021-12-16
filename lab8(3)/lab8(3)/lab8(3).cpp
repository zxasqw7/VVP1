#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout << "Введите двузначное число: ";
	cin >> a;
	b = a / 10 + a % 10 * 10;
	cout << "Число при перестановке цифр: " << b ;
	return 0;
}