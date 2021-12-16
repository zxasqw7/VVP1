#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int A, B, c;
    cout << "Введите длину отрезка A: ";
    cin >> A;
    cout << "Введите длину отрезка B (B<A): ";
    cin >> B;
    if (A < B) {
        cout << "отрезок A должен быть больше чем отрезок B";
    }
    else {
        c = A / B;
        cout << "На отрезке A" << " размещенно " << c << " отр. B";
    }
    return 0;
}
    