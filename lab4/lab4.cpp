#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	int S = a * b;
	cout << "S = " << S << endl;
	int P = 2 * (a + b);
	cout << "P = " << P;
	return 0;
}