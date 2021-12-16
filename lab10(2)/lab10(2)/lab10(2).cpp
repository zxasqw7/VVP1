#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int A;
	cout << "Введите целое положительно число A:";
	cin >> A;
	if (A>9 && A<100 && A % 2 == 0) {
		cout << "Число " << A << " двузначное и четное";
	}
	else
	{
		cout << "Высказывание, что число A двузначное или четное - ложь";
	}
	return 0;
}