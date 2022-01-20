#include <iostream>
using namespace std;

int powera3(int a) {
	int b = a * a * a;
	cout << "B = " << b << endl;
	return b;
	
}
int main() {
	setlocale(LC_ALL, "ru");
	int a, i;
	i = 0;
	while (i < 5) {
		cout << "Введите число a: ";
		cin >> a;
		powera3(a);
		i++;
	}
	return 0;
}