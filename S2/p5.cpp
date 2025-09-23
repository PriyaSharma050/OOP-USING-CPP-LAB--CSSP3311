/*5. Transpose of Matrix 
Write a program to find the transpose of a given n x n matrix using pointer 
notation. */

#include <iostream>
using namespace std;

void transposeMatrix(int *mat, int *trans, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(trans + j * n + i) = *(mat + i * n + j);
        }
    }
}

void displayMatrix(int *mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(mat + i * n + j) << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int mat[n][n], trans[n][n];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    transposeMatrix((int*)mat, (int*)trans, n);

    cout << "Original Matrix:\n";
    displayMatrix((int*)mat, n);

    cout << "Transpose Matrix:\n";
    displayMatrix((int*)trans, n);

    return 0;
}
