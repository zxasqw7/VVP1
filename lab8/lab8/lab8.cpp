#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите сколько байт занимает файл: ";
    cin >> a;
    b = a / 1024;
    if (a % 1024 == 0)
    {
        cout << "Файл занимает " << b << " Кб ";
    }
    else 
        cout << "Файл занимает " << b + 1 << " Кб ";
    return 0;
}

    
