#include <iostream>

using namespace std;

int getFirstDigit(int number) {
    while (number >= 10) {
        number /= 10; 
    }
    return number;
}

int getSumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10; 
        number /= 10;       
    }
    return sum;
}

void customSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            int firstDigit1 = getFirstDigit(arr[j]);
            int firstDigit2 = getFirstDigit(arr[j + 1]);
            int sumDigits1 = getSumOfDigits(arr[j]);
            int sumDigits2 = getSumOfDigits(arr[j + 1]);

            if (firstDigit1 > firstDigit2 ||
                (firstDigit1 == firstDigit2 && sumDigits1 > sumDigits2) ||
                (firstDigit1 == firstDigit2 && sumDigits1 == sumDigits2 && arr[j] > arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int MAX_N = 1000;  
    int n;                   
    int a[MAX_N];            

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    customSort(a, n);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
