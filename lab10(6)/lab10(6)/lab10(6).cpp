#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	float a, b, c;
	cout << "Введите первую сторону треугольника: ";
	cin >> a;
	cout << "Введите второую сторону треугольника: ";
	cin >> b;
	cout << "Введите третью сторону треугольника: ";
	cin >> c;
	if (a + b > c)
		cout << "Треугольник есть" << endl;
	else if (a + c > b)
		cout << "Треугольник есть" << endl;
	else if (b + c > a)
		cout << "Треугольник есть" << endl;
	else
		cout << "Треугольник не является прямоугольным" << endl;

	return 0;
}