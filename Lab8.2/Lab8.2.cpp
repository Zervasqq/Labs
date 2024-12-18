#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // Для функций isalnum, isalpha
#include "function.hpp"

using namespace std;

int main() {
    const int MAX_WORDS = 1000; // Максимальное количество слов
    const int MAX_LENGTH = 10000; // Максимальный размер текста

    char text[MAX_LENGTH];
    string words[MAX_WORDS];
    int wordCount = 0;

    // Чтение текста из файла input.txt
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cout << "Не удалось открыть файл input.txt" << endl;
        return 1;
    }

    inputFile.getline(text, MAX_LENGTH);
    inputFile.close();

    // Ручное разделение текста на слова
    string currentWord = "";
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalnum(text[i])) {
            // Если символ буква или цифра, добавляем его в текущее слово
            currentWord += text[i];
        }
        else if (!currentWord.empty()) {
            // Если встречается разделитель и слово собрано, сохраняем его
            words[wordCount++] = currentWord;
            currentWord = ""; // Очищаем текущее слово
        }
    }
    // Добавляем последнее слово, если оно существует
    if (!currentWord.empty()) {
        words[wordCount++] = currentWord;
    }

    // Проверка на наличие слов-палиндромов
    bool hasPalindrome = false;
    for (int i = 0; i < wordCount; i++) {
        if (isPalindrome(words[i])) {
            hasPalindrome = true;
            break;
        }
    }

    if (hasPalindrome) {
        // Продублировать гласные и отсортировать слова в порядке, обратном алфавитному
        for (int i = 0; i < wordCount; i++) {
            words[i] = duplicateVowels(words[i]);
        }
        reverseAlphabeticalSort(words, wordCount);
    }
    else {
        // Отсортировать слова по убыванию количества согласных
        sortByConsonants(words, wordCount);
    }

    // Вывод результата
    cout << "Результат:" << endl;
    for (int i = 0; i < wordCount; i++) {
        cout << words[i] << endl;
    }

    return 0;
}
