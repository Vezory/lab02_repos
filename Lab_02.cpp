// Lab_02.cpp
// Лабораторна робота № 2.
// Новосад Захар
// Лінійні програми.
// Варіант 16
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;  // вхідний параметр (ОДЗ: x > 3)
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу

    cout << "x = ";
    cin >> x;

    z1 = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) /
        (pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9));

    z2 = sqrt((x + 3) / (x - 3));

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
// ���⮢�� ������ 
