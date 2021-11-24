#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int x, y, y1;
    cout << "Введите число, которое нужно возвести в 15 степень: ";
    cin >> x;
    y = x * x;//2 степень
    y1 = y * x;//3 степень
    y = y1 * y;//5 степень 
    y1 = y * y;//10 степень 
    y = y * y1;//15 степень 
    cout << "число " << x << " в 15 степени = " << y;
    return 0;
}