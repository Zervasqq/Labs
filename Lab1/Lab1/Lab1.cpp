// 1. Переменная - это символ, содержащий в себе какую-либо информацию (данные). В зависимости от количество данных в переменной следует выбирать определенный тип данных.

// 2. Типы данных.
// Целочисленные: char (1 байт) от -128 до 127, short (2 байта) от -32768 до 32767, int (4 байта) от -2^31 до 2^31-1, long long (8 байт) от -2^63 до 2^63-1, unsigned int (4 байта) от 0 до 2^32-1
// Символьный: char (1 байт) от -128 до 127
// Вещественный: double (8 байт) от 15 до 16 цифр, float (4 байта) от 6 до 7 цифр
// Логический: bool (1 байт), true (2 байта) (значение 1), false (2 байта) (значение 0)

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Целочисленные:" << endl;
    cout << "char (1 байт) от -128 до 127" << endl;
    cout << "short (2 байта) от -32768 до 32767" << endl;
    cout << "int (4 байта) от -2^31 до 2^31-1" << endl;
    cout << "long long (8 байт) от -2^63 до 2^63-1" << endl;
    cout << "unsigned int(4 байта) от 0 до 2 ^ 32 - 1" << endl;
    cout << "Символьный:" << endl;
    cout << "char (1 байт) от -128 до 127" << endl;
    cout << "Вещественный:" << endl;
    cout << "double (8 байт) от 15 до 16 цифр" << endl;
    cout << "float (4 байта) от 6 до 7 цифр" << endl;
    cout << "Логический:" << endl;
    cout << "bool (1 байт)" << endl;
    cout << "true (2 байта) (значение 1)" << endl;
    cout << "false (2 байта) (значение 0)" << endl;

    char a = 10;
    char b = 5;
    cout << a * b << endl;

    short c = 20400;
    short d = 10000;
    cout << c - d << endl;

    int e = 2500000;
    int f = 3000000;
    cout << e + f << endl;

    char g = 43; //  Код выведет плюсик исходя из ASCII таблицы
    cout << g << endl;

    double h = 123.0;
    cout << h / 23 << endl;

    float j = 123.0f;
    cout << j / 23 << endl;

    int num1= 10;
    int num2= 15;
    bool total {num1 > num2}; // Код выведет 0 (false), так как 10 не больше 15
    cout << total << endl;

    int num3 = 10;
    int num4 = 15;
    bool total2 { num3 < num4 }; // Код выведет 1 (true), так как 15 больше 10
    cout << total2 << endl;






}
