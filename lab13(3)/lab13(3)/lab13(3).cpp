#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float A, h, res;
    h = 1;
    res = 1;
    cout << "Введите вещественное число A: ";
    cin >> A;
    int N, i;
    cout << "Введите целое число N (N > 0): ";
    i = 1;
    cin >> N;
    while (i <= N)
    {
        h = h * A;
        res = res + h;
        ++i;
    }
    cout << "Сумма = " << res;
}