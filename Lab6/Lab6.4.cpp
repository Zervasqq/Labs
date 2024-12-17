#include <iostream>
#include <cmath>

using namespace std;

bool containsDigit(int number, int target) {
    while (number > 0) {
        if (number % 10 == target) return true; 
        number /= 10;
    }
    return false;
}

bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    const int MAX_N = 10000; 
    int n;                  
    int arr[MAX_N];          
    int newSize = 0;      

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (containsDigit(arr[i], 7) && !containsDigit(arr[i], 6)) {
            continue;
        }

        arr[newSize++] = arr[i];

        if (isPrime(arr[i])) {
            arr[newSize++] = arr[i];
        }
    }
    for (int i = 0; i < newSize; ++i) {
        bool isUnique = true;
        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
