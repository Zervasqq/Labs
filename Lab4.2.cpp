// 5 вариант
// Задача. Ввести число N, обозначающее код товара в магазине. При помощи оператора switch вывести название товара. Код товара и название придумать самостоятельно. Минимум 5 штук. Предусмотреть обработку ошибочного ввода N.


#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите код товара." << endl;
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Гречка" << endl;
        break;
    case 2:
        cout << "Чипсы Lays" << endl;
        break;
    case 3:
        cout << "Рис" << endl;
        break;
    case 4:
        cout << "Макароны" << endl;
        break;
    case 5:
        cout << "Хлеб" << endl;
        break;
    default:
        cout << "Неверный код товара." << endl;
        break;
    }
}

