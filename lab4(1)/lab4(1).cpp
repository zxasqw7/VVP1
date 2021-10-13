#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    float d;
    cout << "Введите диаметр окружности: ";
    cin >> d;
    float pi = 3.14;
    float L = pi * d;
    cout << "Длина окружности = " << L;
    return 0;
}


