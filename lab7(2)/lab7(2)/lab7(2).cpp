#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, a, y, z, v;
    cout << "Введите вес конфет (кг): ";
    cin >> x;
    cout << "Введите цену " << x << " кг конфет: ";
    cin >> a;
    z = a / x;
    cout << "Один кг конфет стоит " << z << " рублей" << endl;
    cout << "Введите сколько кг конфет вам нужно: ";
    cin >> y;
    v = z * y;
    cout << y << " кг конфет стоит: " << v << " рублей";
    return 0;
}