#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int x1, x2, y1, y2, l, h, P, S;
    cout << "Введите координаты первой вершины прямоугольника: ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины прямоугольника: ";
    cin >> x2 >> y2;
    l = x2 - x1;
    h = y1 - y2;
    P = (l + h) * 2;
    cout << "Периметр прямоугольника = " << P << endl;
    S = l * h;
    cout << "Площадь прямоугольника = " << S;
    return 0;
}
