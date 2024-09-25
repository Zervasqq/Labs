// 5 вариант
// Задача 1. Ввести натуральные числа A, B и C. Если A меньше B и B меньше C, то вывести C-B-A, в противном случае если A кратно C, то вывести A/С+B, в остальных случаях вывести A+B+C.


#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c)
	{
		cout << c - b - a << endl;
	}
	else if (a % c == 0)
	{
		cout << a / c + b << endl;
	}
	else
	{
		cout << a + b + c << endl;
	}
}



