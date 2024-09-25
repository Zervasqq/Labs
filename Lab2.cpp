
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Для вычисления объёма введите стороны прямоугольного параллелепипеда." << endl;
	cin >> a >> b >> c;
	if (a > 0 && a < 10*10*10*10 && b > 0 && b < 10 * 10 * 10 * 10 && c > 0 && c < 10 * 10 * 10 * 10)
	{
		cout << "Объём прямоугольного параллелепипеда равен " << a * b * c << "." << endl;
	}
	else
	{
		cout << "Ошибка: неверные значения сторон." << endl;
	}
   
}
