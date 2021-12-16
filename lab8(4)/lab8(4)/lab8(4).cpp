#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a, b;
	cout << "Введите трехзначное число: ";
	cin >> a;
    b = (a % 100 / 10 * 100) + (a % 10) * 10 + a / 100;
	cout << "Полученное число: " << b;
	return 0;
}