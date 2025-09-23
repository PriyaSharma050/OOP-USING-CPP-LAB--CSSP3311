/*9. Pointer to Array of Pointers 
Create an array of string pointers (e.g., names of 5 students) and print them using 
pointer notation. */

#include <iostream>
using namespace std;

int main() {
    const char *students[5] = {"Aman", "Vansh", "Sunidhi", "Pooja", "Kavya"};

    const char **ptr = students;

    cout << "Student Names:\n";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) <<"\n";  
    }

    return 0;
}
