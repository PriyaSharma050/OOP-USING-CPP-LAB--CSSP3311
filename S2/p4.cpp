/*4. Matrix Addition 
Input two 2D matrices (size m x n) and find their sum. Pass the 2D arrays to a 
function using pointers.*/

#include <iostream>
using namespace std;

void sumMatrices(int *a, int *b, int *c, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           *(c + i * n + j) = *(a + i * n + j) + *(b + i * n + j);
        }
    }
}

void displayMatrix(int *mat, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(mat + i * n + j) << " ";
        }
        cout << "\n";
    }
}

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    int a[m][n], b[m][n], c[m][n];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    sumMatrices((int*)a, (int*)b, (int*)c, m, n);

    cout << "Sum of matrices:\n";
    displayMatrix((int*)c, m, n);

    return 0;
}
