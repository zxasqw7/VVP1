#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите сколько байт занимает файл: ";
    cin >> a;
    b = a / 1024;
    cout << "Файл занимает " << b << " Кб ";
    return 0;
}

    