#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    setlocale(LC_ALL, "Ru");
    float x1, x2, y1, y2, z, a;
    cout << "Введите координаты первой точки: ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки: ";
    cin >> x2 >> y2;
    a = pow((x2 - x1), 2) + pow((y2 - y1),2);
    z = sqrt(a);
    cout << "Расстояние между двумя точками равно: " << z;
    return 0;
    }

