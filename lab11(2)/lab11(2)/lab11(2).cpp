#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    float Ax, Ay, Bx, By, Cx, Cy, AB, AC;
    cout << "Введите точку A: ";
    cin >> Ax >> Ay;
    cout << "Введите точку B: ";
    cin >> Bx >> By;
    cout << "Введите точку C: ";
    cin >> Cx >> Cy;
    AB = sqrt(pow((Bx - Ax), 2) + pow((By - Ay), 2));
    AC = sqrt(pow((Cx - Ax), 2) + pow((Cy - Ay), 2));
    if (AB > AC) 
    {
        cout << "Точка C ближе, расстояние: " << AC;
    }
    else if (AB < AC) 
    {
        cout << "Точка B ближе, расстояние: " << AB;
    }
    else
        cout << "Расстояние от точки А и В одинаковое" << AB;
        
    return 0;
}

