#include <iostream>

using namespace std;

bool startsWithOne(int number) {
    while (number >= 10) {
        number /= 10;  
    }
    return number == 1;
}

void Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int MAX_N = 10000;  
    int n;                   
    int a[MAX_N];            

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool hasNumberStartingWithOne = false;
    for (int i = 0; i < n; ++i) {
        if (startsWithOne(a[i])) {
            hasNumberStartingWithOne = true;
            break;
        }
    }

    if (hasNumberStartingWithOne) {
        Sort(a, n); 
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
