#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int K, x;
	cout << "Введите день недели (от 1 до 365): ";
	cin >> K;
	if (K < 1 || K > 365) {
		cout << "Число должно лежать в диапазоне от 1 до 365";
	}
	else {
    x = K % 7;
	cout << "Номер дня недели = " << x;
	}
	return 0;
}