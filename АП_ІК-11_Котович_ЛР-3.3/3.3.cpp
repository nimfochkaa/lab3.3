// 3.3.cpp
// < Котович Вікторія Сергіївна >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -5) 
		y = -3;
	else if (x > -5 && x <= -R) 
		y = (R - 3) / (R - 5) * (x + R) - 3;
	else if (x > -R && x <= R) 
		y = sqrt(R * R - x * x);
	else if (x > R && x <= 8) 
		y = (5.0 / 3.0) * (x - R);
	else 
		y = 8;
	
	cout << endl;
	cout << "y = " << y << endl;
	
	cin.get();
	return 0;
}
