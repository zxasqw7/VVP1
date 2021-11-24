#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int v1, v2, t, s1, s2, s3, s4;
    cout << "Введите скорость первого автомобиля: ";
    cin >> v1;
    cout << "Введите скорость второго автомобиля: ";
    cin >> v2;
    cout << "Введите изначальное расстояние между автомобилями: ";
    cin >> s1;
    cout << "Введите время (часы): ";
    cin >> t;
    s2 = v1 * t;
    s3 = v2 * t;
    s4 = s2 + s3 + s1;
    cout << " Рассояние между автомобилями " << s4 << " км ";
    return 0;
}
