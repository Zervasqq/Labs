#include <iostream>
#include <fstream>
#include "utilities.hpp"

using namespace std;

int main() {
    Node* head = nullptr;

    // Чтение последовательности из файла input.txt
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cout << "Не удалось открыть файл input.txt" << endl;
        return 1;
    }

    int number;
    while (inputFile >> number) {
        append(head, number);
    }
    inputFile.close();

    // Проверка упорядоченности
    if (isOrdered(head)) {
        // Удалить составные числа и продублировать простые числа с цифрами 1, 5 или 7
        deleteCompositeNumbers(head);
        duplicateSpecificPrimes(head);
    }
    else {
        // Упорядочить список по неубыванию
        sortList(head);
    }

    // Вывод результата
    cout << "Результирующий список:" << endl;
    printList(head);

    return 0;
}
