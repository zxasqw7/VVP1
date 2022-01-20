#include <iostream>
using namespace std;

int quarter(int x, int y) {
	if (x > 0 && y > 0) {
		return 1;
	}
	else if (x < 0 && y > 0) {
		return 2;
	}
	else if (x < 0 && y < 0) {
		return 3;
	}
	else if (x > 0 && y < 0) {
		return 4;
	}
}
int main() {
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < 3; i++) 
	{
		int x, y;
		cout << "Введите координату по x: ";
		cin >> x;
		cout << "Введите координату по y: ";
		cin >> y;
		quarter(x, y);
		cout << quarter(x, y) << endl;
	}
	return 0;
}