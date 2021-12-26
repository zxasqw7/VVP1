﻿# include <iostream>
# include <windows.h>
# include <cmath>
# include <iomanip>
# include <fstream>
# include <string.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int K;
    cout << "Введите целое число (от 100–999): ";
    cin >> K;
    cout << K << " - ";
    switch (K / 100) 
    {
    case 1: cout << "Сто "; break;
    case 2: cout << "Двести "; break;
    case 3: cout << "Триста "; break;
    case 4: cout << "Четыреста "; break;
    case 5: cout << "Пятьсот "; break;
    case 6: cout << "Шестьсот "; break;
    case 7: cout << "Семьсот "; break;
    case 8: cout << "Восемьсот "; break;
    case 9: cout << "Девятьсот "; break;
    }
    switch ((K % 100) / 10) 
    {
    case 0: break;
    case 2: cout << "двадцать "; break;
    case 3: cout << "тридцать "; break;
    case 4: cout << "сорок "; break;
    case 5: cout << "пятьдесят "; break;
    case 6: cout << "шестьдесят "; break;
    case 7: cout << "семьдесят "; break;
    case 8: cout << "восемьдесят "; break;
    case 9: cout << "девяносто "; break;
    case 1: switch (K % 100) {
    case 11: cout << "одиннадцать "; break;
    case 12: cout << "двенадцать "; break;
    case 13: cout << "тринадцать "; break;
    case 14: cout << "четырнадцать "; break;
    case 15: cout << "пятнадцать "; break;
    case 16: cout << "шестнадцать "; break;
    case 17: cout << "семнадцать "; break;
    case 18: cout << "восемнадцать "; break;
    case 19: cout << "девятнадцать "; break;
    case 10: cout << "десять "; break;
    }
    }
    if ((K % 100 / 10) != 1) 
    {
        switch (K % 10) {
        case 0: break;
        case 1: cout << "один "; break;
        case 2: cout << "два "; break;
        case 3: cout << "три "; break;
        case 4: cout << "четыре "; break;
        case 5: cout << "пять "; break;
        case 6: cout << "шесть "; break;
        case 7: cout << "семь "; break;
        case 8: cout << "восемь "; break;
        case 9: cout << "девять "; break;
        }
    }
    cout;
    system("pause");
    return 0;
}