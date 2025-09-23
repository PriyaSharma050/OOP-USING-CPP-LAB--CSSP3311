/*8. Display a 3D Matrix 
Write a program to input and print elements of a 3 x 3 x 3 cube using only pointers 
(no arr[i][j][k] syntax). */

#include <iostream>
using namespace std;

void display3D(int *arr, int x, int y, int z) {
    int *ptr = arr;
    for (int i = 0; i < x; i++) {
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << *(ptr + i * y * z + j * z + k) << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}

int main() {
    const int x = 3, y = 3, z = 3;
    int cube[x][y][z];

    cout << "Enter elements of 3 x 3 x 3 cube (" << x*y*z << " elements):\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cin >> *(&cube[0][0][0] + i * y * z + j * z + k);
            }
        }
    }

    cout << "\nElements of 3D matrix (cube):\n";
    display3D((int*)cube, x, y, z);

    return 0;
}
