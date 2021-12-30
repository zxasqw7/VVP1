#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float A, h, res;
    cout << "Введите вещественное число A: ";
    cin >> A;
    int N;
    cout << "Введите целое число N (N > 0): ";
    cin >> N;
    h = 1;
    res = 1;
    int i;
    for (i = 1; i <= N; ++i)
    {
        h *= -A;
        res += h;
    }
    cout << "Значение выражения  = " << res;
}