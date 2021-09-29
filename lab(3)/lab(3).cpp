#include <iostream>
using namespace std;

int main()
{
    float x;
    cout << "x: ";
    cin >> x;
    float y;
    cout << "y: ";
    cin >> y;
    float summ = x * x + y * y;
    cout << "summa kvadratov  = " << summ << endl;
    float diff = x * x - y * y;
    cout << "raznost kvadratov  = " << diff << endl;
    float mult = (x * x) * (y * y);
    cout << "proizvedenie kvadratov = " << mult << endl;
    float div = (x * x) / (y * y);
    cout << "4astnoe kvadratov  = " << div;
    return 0;
}

