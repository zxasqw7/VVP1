# include <iostream>
# include <windows.h>
# include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    char S;
    int N;
    cout << "Введите символ направления («N» — север, «W» — запад, «S» — юг, «E» — восток): ";
    cin >> S;
    cout << "Введите цифровую команду для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ";
    cin >> N;
    cout << "Направление - ";
    switch (N) 
    {
        case 1: switch (S) 
        {
            case 'N': cout << "W"; break;
            case 'S': cout << 'E'; break;
            case 'W': cout << 'S'; break;
            case 'E': cout << 'N'; break;
        } break;
        case -1: switch (S) 
        {
            case 'N': cout << 'E'; break;
            case 'S': cout << 'W'; break;
            case 'W': cout << 'N'; break;
            case 'E': cout << 'S'; break;
        } break;
        case 0: switch (S) 
        {
            case 'N': cout << "N"; break;
            case 'S': cout << "S"; break;
            case 'W': cout << "W"; break;
            case 'E': cout << "E"; break;
        } break;
    }
    return 0;
}