#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	float x, y;
	cout << "Введите x: ";
	cin >> x;
	y = 4 * pow((3 * x), 6) - pow((6 * x), 2) - 7;
	cout << "y = " << y;
	return 0;
}