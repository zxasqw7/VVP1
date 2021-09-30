#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    float d;
    cout << "Введите d: ";
    cin >> d;
    float pi = 3.14;
    float L = pi * d;
    cout << "Длина окружности = " << L;
    return 0;
}


