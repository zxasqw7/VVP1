#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int A, C, B, d1, d2, mult;
    cout << "Введите точку A: ";
    cin >> A;
    cout << "Введите точку C (должна лежать между точками A и B: ";
    cin >> C;
    cout << "Введите точку B: ";
    cin >> B;
    if (C > B)
    {
    cout << "Точка C должна лежать между точками A и B";
    }
    else
    {
    d1 = C - A;
    d2 = B - C;
    mult = d1 * d2;
    cout << "Произведение длин отрезков = " << mult;
    }
    return 0;
}
