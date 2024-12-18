#include "utilities.hpp"
#include <iostream>
using namespace std;

// Добавление элемента в конец списка
void append(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Удаление составных чисел
void deleteCompositeNumbers(Node*& head) {
    Node* prev = nullptr;
    Node* curr = head;

    while (curr) {
        if (!isPrime(curr->data)) { // Если число составное
            if (!prev) {            // Удаляем первый элемент
                head = curr->next;
                delete curr;
                curr = head;
            }
            else {                // Удаляем элемент в середине/конце
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
        }
        else {
            prev = curr;
            curr = curr->next;
        }
    }
}

// Дублирование простых чисел, содержащих цифры 1, 5 или 7
void duplicateSpecificPrimes(Node*& head) {
    Node* curr = head;

    while (curr) {
        if (isPrime(curr->data) &&
            (containsDigit(curr->data, 1) || containsDigit(curr->data, 5) || containsDigit(curr->data, 7))) {
            Node* duplicate = new Node(curr->data);
            duplicate->next = curr->next;
            curr->next = duplicate;
            curr = duplicate->next;
        }
        else {
            curr = curr->next;
        }
    }
}

// Проверка упорядоченности последовательности
bool isOrdered(Node* head) {
    if (!head || !head->next) return true;

    Node* curr = head;
    while (curr && curr->next) {
        int first1 = curr->data % 10;          // Последняя цифра текущего
        int first2 = curr->next->data % 10;   // Последняя цифра следующего

        int last1 = curr->data;
        while (last1 >= 10) last1 /= 10;      // Первая цифра текущего

        int last2 = curr->next->data;
        while (last2 >= 10) last2 /= 10;      // Первая цифра следующего

        if ((first1 < first2) && (last1 < last2)) {
            return false; // Неупорядоченность
        }
        curr = curr->next;
    }
    return true;
}

// Упорядочивание списка по неубыванию
void sortList(Node*& head) {
    if (!head || !head->next) return; // Если список пуст или содержит один элемент

    for (Node* i = head; i; i = i->next) {
        for (Node* j = i->next; j; j = j->next) {
            if (i->data > j->data) {
                swap(i->data, j->data);
            }
        }
    }
}

// Вывод списка
void printList(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Проверка числа на простоту
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Проверка, содержит ли число заданную цифру
bool containsDigit(int n, int digit) {
    while (n) {
        if (n % 10 == digit) return true;
        n /= 10;
    }
    return false;
}
