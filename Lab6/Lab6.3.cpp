#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int MAX_N = 100; 
    const int MAX_M = 100; 
    int n, m;             
    int A[MAX_N][MAX_M];   
    int rowSums[MAX_N];     

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        rowSums[i] = 0; 
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
            rowSums[i] += A[i][j]; 
        }
    }

    int closestRow = 0; 
    int minAbsSum = abs(rowSums[0]); 

    for (int i = 1; i < n; ++i) {
        if (abs(rowSums[i]) < minAbsSum) {
            minAbsSum = abs(rowSums[i]);
            closestRow = i;
        }
    }

    for (int j = 0; j < m; ++j) {
        A[closestRow][j] = 0;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
