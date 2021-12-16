#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int y, x;
	cout << "Введите год: ";
	cin >> y;
	x = (y / 100) + 1;
	cout << y << " год это " << x << " столетие";
	return 0;
}