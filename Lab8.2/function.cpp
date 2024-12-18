#include "function.hpp"
#include <cctype>
#include <cstring>

bool isPalindrome(const std::string& word) {
    int len = word.length();
    for (int i = 0; i < len / 2; i++) {
        if (tolower(word[i]) != tolower(word[len - 1 - i])) {
            return false;
        }
    }
    return len > 1;
}

bool isVowel(char c) {
    char lowerC = tolower(c);
    return lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u';
}

int countConsonants(const std::string& word) {
    int count = 0;
    for (char c : word) {
        if (isalpha(c) && !isVowel(c)) {
            count++;
        }
    }
    return count;
}

std::string duplicateVowels(const std::string& word) {
    std::string result;
    for (char c : word) {
        result += c;
        if (isVowel(c)) {
            result += c;
        }
    }
    return result;
}

void sortByConsonants(std::string words[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (countConsonants(words[j]) < countConsonants(words[j + 1])) {
                std::swap(words[j], words[j + 1]);
            }
        }
    }
}

void reverseAlphabeticalSort(std::string words[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (words[j] < words[j + 1]) {
                std::swap(words[j], words[j + 1]);
            }
        }
    }
}
