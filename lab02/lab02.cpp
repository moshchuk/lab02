// Lab_02.1.cpp
// < ����� ���'��� >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 0.9

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    double alpha;
    double betta;

    cout << "����i�� �������� alpha: " << endl;
    cin >> alpha;

    cout << "����i�� �������� betta: " << endl;
    cin >> betta;

    double z1 = pow((cos(alpha) - cos(betta)), 2) - pow((sin(alpha) - sin(betta)), 2);
    cout << "z1 = " << z1 << endl;

    double z2 = -4 * pow(sin((alpha - betta) / 2), 2) * cos(alpha - betta);
    cout << "z2 = " << z2 << endl;

    return 0;
}