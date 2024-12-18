struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Функции для работы с односвязным списком
void append(Node*& head, int value);                // Добавление элемента в конец списка
void deleteCompositeNumbers(Node*& head);           // Удаление составных чисел
void duplicateSpecificPrimes(Node*& head);          // Дублирование простых чисел, содержащих цифры 1, 5, 7
bool isOrdered(Node* head);                         // Проверка упорядоченности последовательности
void sortList(Node*& head);                         // Упорядочивание списка по неубыванию
void printList(Node* head);                         // Вывод списка

// Вспомогательные функции
bool isPrime(int n);                                // Проверка числа на простоту
bool containsDigit(int n, int digit);               // Проверка, содержит ли число заданную цифру

