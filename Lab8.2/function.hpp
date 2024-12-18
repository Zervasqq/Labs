#include <string>

// Проверка, является ли слово палиндромом
bool isPalindrome(const std::string& word);

// Проверка, является ли символ гласной буквой
bool isVowel(char c);

// Подсчет количества согласных в слове
int countConsonants(const std::string& word);

// Дублирование гласных в слове
std::string duplicateVowels(const std::string& word);

// Сортировка слов по убыванию количества согласных
void sortByConsonants(std::string words[], int n);

// Сортировка слов в порядке, обратном алфавитному
void reverseAlphabeticalSort(std::string words[], int n);
