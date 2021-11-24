#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float A, B, x;
    cout << " Введите число A (не должно быть равно нулю): ";
    cin >> A;
    if (A == 0)
    {
        cout << "Число 'A' НЕ должно быть равно нулю";
    }
    else
    {
        cout << " Введите число B: ";
        cin >> B;
        x = -B / A;
        cout << "x = " << x;
    }
    return 0;
}