#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    float x;
    cout << "Введите первое число (ненулевое): ";
    cin >> x;
    float y;
    cout << "Введите второе число (ненулевое): ";
    cin >> y;
    float summ = x * x + y * y;
    cout << "Сумма квадратов = " << summ << endl;
    float diff = x * x - y * y;
    cout << "Разность квадратов = " << diff << endl;
    float mult = (x * x) * (y * y);
    cout << "Произведение квадратов = " << mult << endl;
    float div = (x * x) / (y * y);
    cout << "Частное квадратов = " << div;
    return 0;
}
