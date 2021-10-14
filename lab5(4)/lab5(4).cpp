#include <iostream>
﻿#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    float x1, x2, x3, y1, y2, y3, dis1, dis2, dis3, P, p, h, S;
    cout << "Введите координаты первой вершины треугольника: ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины треугольника: ";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины треугольника: ";
    cin >> x3 >> y3;
    dis1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    dis2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    dis3 = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    P = dis1 + dis2 + dis3;
    cout << "Периметр треугольника = " << P << endl;
    p = P / 2;
    h = 2*(sqrt(p*(p-dis1)*(p-dis2)*(p-dis3)))/dis1;
    S = dis1*h/2;
    cout << "Площадь треугольника = " << S;
    return 0;
}

