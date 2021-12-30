#include <iostream>
using namespace std;

int main()
{
    int n, k, s;
    cout << " Введите N (N > 1): ";
    cin >> n;
    k = 0;
    s = 0;
    while (s <= n)
    {
        k += 1;
        s += k;
    }
    cout << "k:" << k << "\ns:" << s;
    return 0;
}