// Lab_02.cpp
// < Бандрівський Денис >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 1

#include <iostream>
#include <windows.h>

#pragma execution_character_set( "utf-8" )

using namespace std;

int main() {
	SetConsoleOutputCP(65001);
	double z1;
	double z2;
	double a;
	double Pi = 4 * atan(1.);

	cout << "Pi number : " << Pi << endl;

	cout << "Enter the number a: "; cin >> a;

	z1 = (2. * pow(sin((3. * Pi) - (2. * a)), 2)) * (pow(cos((5. * Pi) + (2. * a)), 2));
	z2 = 1. / 4 - 1. / 4 * sin(5. / 2 * Pi - 8 * a);

	cout << "If a = " << a << endl << "z1 = " << z1 << endl << "z2 = " << z2 << endl;

	return 0;
}
