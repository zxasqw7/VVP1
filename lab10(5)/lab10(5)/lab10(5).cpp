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
	if (a * a == b * b + c * c)
		cout << "Треугольник прямоугольный" << endl;
	else if (b * b == a * a + c * c)
		cout << "Треугольник прямоугольный" << endl;
	else if (c * c == a * a + b * b)
		cout << "Треугольник прямоугольный" << endl;
	else
		cout << "Треугольник не является прямоугольным" << endl;

	return 0;
}

