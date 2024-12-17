#include <iostream>
using namespace std;

int main() {
    long long N;
    cout << "Введите число N: ";
    cin >> N;

    int max_digit = 0;  // Переменная для хранения наибольшей цифры

    // Процесс извлечения цифр и поиска наибольшей
    while (N > 0) {
        int digit = N % 10;  // Извлекаем последнюю цифру
        if (digit > max_digit) {
            max_digit = digit;  // Обновляем наибольшую цифру
        }
        N /= 10;  // Убираем последнюю цифру
    }

    cout << "Наибольшая цифра числа: " << max_digit << endl;

    return 0;
}
