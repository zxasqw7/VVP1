#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int x, y;
    cout << "Введите координату по x: ";
    cin >> x;
    cout << "Введите координату по y: ";
    cin >> y;

    if (x > 0 && y > 0) 
    {
        cout << "Точка находится в 1-ой четверти";
    }
    else if (x < 0 && y>0) 
    {
        cout << "Точка находится во 2-ой четверти";
    }
    else if (x < 0 && y < 0) 
    {
        cout << "Точка находится в 3-ей четверти";
    }
    else if (x > 0 && y < 0) 
    {
        cout << "Точка находится в 4-ой четверти";
    }
    return 0;
}