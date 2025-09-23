/*7. Sum of All Elements 
Input elements of a 2 x 2 x 2 3D array and find the sum of all elements using 
pointer arithmetic. */

#include <iostream>
using namespace std;

int sum3D(int *arr, int x, int y, int z) {
    int sum = 0;
    int total = x * y * z;

    for (int i = 0; i < total; i++) {
        sum += *(arr + i);
    }

    return sum;
}

int main() {
    const int x = 2, y = 2, z = 2;
    int arr[x][y][z];

    cout << "Enter elements of 2 x 2 x 2 array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cin >> arr[i][j][k];
            }
        }
    }

    int result = sum3D((int*)arr, x, y, z);

    cout << "Sum of all elements: " << result << "\n";

    return 0;
}
