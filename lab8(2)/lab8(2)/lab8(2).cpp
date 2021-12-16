#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int A, B, c, c1;
    cout << "Введите длину отрезка A: ";
    cin >> A;
    cout << "Введите длину отрезка B(B<A): ";
    cin >> B;
    if (B > A) {
        cout << "Отрезок B должен быть меньше чем отрезок A";
    }
    else {
        c = A / B;
        c1 = A - B * c;
        cout << "Длина незанятой части = " << c1;
    }
    return 0;
}

