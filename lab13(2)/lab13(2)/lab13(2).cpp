#include <iostream>
using namespace std;

int main() {
    int N, i, a;
    a = 0;
    cout << "Введите целое число N (N > 0): ";
    cin >> N;
    i = 1;
    while (i <= 2 * N - 1) 
    {
        a = a + i;
        cout << a << endl;
        i = i + 2;
    }
    return 0;
}