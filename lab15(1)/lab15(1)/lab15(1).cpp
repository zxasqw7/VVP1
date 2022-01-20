#include <iostream>
using namespace std;

int sign(int x) {
	if (x < 0) {
		return -1;
	}
	else if (x == 0) {
		return 0;
	}
	else if (x > 0) {
		return 1;
	}
	return x;
}
int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << sign(a) + sign(b);
	return 0;
}