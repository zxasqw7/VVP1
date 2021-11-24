#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int x, y;
    cout << "Введите число, которое нужно возвести в 8 степень: ";
    cin >> y;
    x = y * y;//2 степень
    x = x * x;//4 степень 
    x = x * x;// 8 степень
    cout << "число " << y << " в 8 степени = " << x;
    return 0;
}