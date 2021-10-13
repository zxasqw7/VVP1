#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int A, B, C, d1, d2, summ;
    cout << "Введите точку A: ";
    cin >> A;
    cout << "Введите точку B: ";
    cin >> B;
    cout << "Введите точку C: ";
    cin >> C;
    d1 = C - A;
    cout << "Длина отрезка AC = " << d1 << endl;
    d2 = C - B;
    cout << "Длина отрезка BC  = " << d2 << endl;
    summ = d1 + d2;
    cout << "Сумма отрезков AC и BC = " << summ;
    return 0;
}


