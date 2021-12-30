#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите целое положительное число A: ";
    cin >> A;
    cout << "Введите целое положительное число B:";
    cin >> B;
    cout << "НОД чисел " << A << " и " << B << " = ";
    while ((A != 0) & (B != 0)) 
    {
        if (A > B) 
        {
            A = A % B;
        }
        else 
        {
            B = B % A;
        }
    }
    cout << A + B;
    return 0;
}