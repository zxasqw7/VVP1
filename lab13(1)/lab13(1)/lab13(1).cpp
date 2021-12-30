#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int N, i;
    double h, a;
    h = 1;
    a = 1;
    cout << "Введите число N ( N > 0): ";
    cin >> N;
    i = 0;
    while (i <= N)
    {
        h = h * a;
        a = a + 0.1;
        i++;
    }
    cout << "Произведение сомножителей = " << h;
    return 0;
}