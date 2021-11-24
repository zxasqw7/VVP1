#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, deg, pi;
    pi = 3.14;
    cout << "Введите величину угла (в радианах) ";
    cin >> a;
    if (a >= 0 && a <= 2)
    {
        deg = 180 * a / pi;
        cout << a << " радиан = " << deg << " градусов";
    }
    else
    {
        cout << "Введите значение, которое лежит в промежутке от 0 до 2";
    }
    return 0;
}