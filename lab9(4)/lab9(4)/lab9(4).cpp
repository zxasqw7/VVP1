#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int y, x;
	cout << "Введите год: ";
	cin >> y;
	x = (y / 100);
	if (y % 100 == 0)
	{
		cout << y << " год это " << x << " столетие";
	}
	else 
		cout << y << " год это " << x + 1 << " столетие";
	return 0;
}
