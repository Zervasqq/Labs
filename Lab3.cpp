
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, x;
	cout << "Введите число." << endl;
	cin >> x;
	cout << "Введите бит числа, который Вы хотите заменить на 0." << endl;
	cin >> i;
	if (x > 0 and x < 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10)
	{
		cout << "После замены число преобразовалось в " << (x & ~(1 << i)) << endl;
	}
	else
	{
		cout << "Некорретное значение переменной x.";
	}
}