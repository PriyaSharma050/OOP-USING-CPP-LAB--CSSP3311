/*9. Returning Object from Member Function 
Define a class Matrix with a 2x2 array. Create a member function add(Matrix 
&m) that returns the sum as a new Matrix object (by value).*/

#include <iostream>
using namespace std;

class Matrix{
    int arr[2][2];

    public:
    Matrix(){
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                arr[i][j] = 0;
    }

    Matrix(int a[2][2]){
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                arr[i][j] = a[i][j];
    }

    Matrix add(Matrix &m){
        Matrix temp;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                temp.arr[i][j] = arr[i][j] + m.arr[i][j];
        return temp;
    }

    void display(){
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
};

int main(){
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};

    Matrix m1(a), m2(b);
    cout << "Matrix 1:\n";
    m1.display();
    cout << "Matrix 2:\n";
    m2.display();
    Matrix m3 = m1.add(m2);
    cout << "Sum of Matrix 1 and Matrix 2:\n";
    m3.display();

    return 0;
}
