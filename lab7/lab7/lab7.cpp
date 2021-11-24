#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, rad, pi;
    pi = 3.14;
    cout << "Введите угол (в градусах): ";
    cin >> a;
    if (a >= 0 && a <= 360)
    {
        rad = a * pi / 180;
        cout << a << " градусов  = " << rad << " радиан";
    }
    else
        cout << "Введите значение, которое лежит в промежутке от 0 до 360 ";
    return 0;
}

    