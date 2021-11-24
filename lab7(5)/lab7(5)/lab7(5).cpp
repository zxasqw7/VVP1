#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double A1, B1, C1, A2, B2, C2, x, y, a, a1, a2;
    cout << "Введите A1: ";
    cin >> A1;
    cout << "Введите B1: ";
    cin >> B1;
    cout << "Введите C1: ";
    cin >> C1;
    cout << "Введите A2: ";
    cin >> A2;
    cout << "Введите B2: ";
    cin >> B2;
    cout << "Введите C2: ";
    cin >> C2;
    a = A1 * B2 - B1 * A2;
    a1 = C1 * B2 - B1 * C2;
    a2 = A1 * C2 - C1 * A2;
    x = a1 / a;
    y = a2 / a;
    if (x == -0) {
        x = 0;
    }
    if (y == -0) {
        y = 0;
    }
    cout << "x = " << x << endl << " y = " << y;

}
    