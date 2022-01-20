#include <iostream>
using namespace std;

float fact2(int n) {
	int buff = 1;
	for (; n > 0; n = n - 2) {
		buff = buff * n;
	}
	return buff;
}
int main(void) {
	setlocale(LC_ALL, "ru");
	int i, n;
	cout << "Введите число n: ";
	cin >> n;
	fact2(n);
	cout << fact2(n);
	return 0;
}
