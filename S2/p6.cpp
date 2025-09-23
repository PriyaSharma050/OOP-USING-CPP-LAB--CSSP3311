/*6. Row-wise Maximum 
Given a 2D array of integers, write a program to find the maximum element of 
each row using pointers.*/

#include <iostream>
using namespace std;

void rowMax(int *mat, int m, int n) {
    for (int i = 0; i < m; i++) {
        int maxVal = *(mat + i * n + 0);
        for (int j = 1; j < n; j++) {
            if (*(mat + i * n + j) > maxVal) {
                maxVal = *(mat + i * n + j);
            }
        }
        cout << "Maximum in row " << i + 1 << ": " << maxVal << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter number of rows and columns of the matrix: ";
    cin >> m >> n;

    int mat[m][n];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    rowMax((int*)mat, m, n);

    return 0;
}
