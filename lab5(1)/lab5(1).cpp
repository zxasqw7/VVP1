#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, summ, AC, BC;
    cout << "Введите точку A: ";
    cin >> A;
    cout << "Введите точку B: ";
    cin >> B;
    cout << "Введите точку C: ";
    cin >> C;
    AC = C - A;
    cout << "Длина AC = " << AC << endl;
    BC = C - B;
    cout << "Длина BC = " << BC << endl;
    summ = AC + BC;
    cout << "Сумма отрезков AC и BC = " << summ;
    return 0;

}
