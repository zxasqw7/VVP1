#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float p;
    cout << "Введите процент P (от 0 до 25): ";
    cin >> p;
    int k = 0;
    float s = 1000;
    while (s <= 1100) 
    {
        k++;
        s += s * p / 100;
    }
    cout << "кол-во месяцев: " << k << endl << "Итоговый размер вклада: " << s;
    return 0;
}