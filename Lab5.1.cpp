#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество чисел в последовательности: ";
    cin >> n;

    int product = 1;  
    int min_value = 1000000;  
    int min_index = -1; 
    bool found = false;  

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;  

        if (num % 10 == 2 || num % 10 == 4) {  
            if (!found) {
                product = num; 
                found = true;
            }
            else {
                product *= num;  
            }

            
            if (num < min_value) {
                min_value = num;
                min_index = i + 1;
            }
        }
    }

    
    if (found) {
        cout << "Произведение чисел, заканчивающихся на 2 или 4: " << product << endl;
        cout << "Наименьшее число из таких: " << min_value << endl;
        cout << "Номер этого числа в последовательности: " << min_index << endl;
    }
    else {
        cout << "Нет чисел, заканчивающихся на 2 или 4." << endl;
    }

    return 0;
}
