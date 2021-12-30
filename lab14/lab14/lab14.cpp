
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B (B > A): ";
    cin >> B;

    int i, j;
    for (i = A; i <= B; ++i) 
    {
        for (j = 1; j <= i; ++j) 
        {
            cout << i << " ";
        }
            
    }
    return 0;
}