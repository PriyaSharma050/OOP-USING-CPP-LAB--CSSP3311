/*6. Flight Reservation System 
Concepts: Dynamic array of objects, object filtering 
Problem: 
Create a class Flight with data members: flightNo, source, destination, seatsAvailable. 
• Allocate flights dynamically (new Flight[n]). 
• Display all flights going to a particular destination entered by user. 
• Update seat count when a booking is made. 
Hint: 
Use functions for searching and seat modification.*/

#include <iostream>
#include <string>
using namespace std;

class Flight {
public:
    int flightNo;
    string source, destination;
    int seatsAvailable;

    void bookSeat(int x) {
        if(seatsAvailable >= x) seatsAvailable -= x;
    }
};

int main() {
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    Flight* f = new Flight[n];

    for(int i=0; i<n; i++) {
        cout << "Enter flightNo source destination seats: ";
        cin >> f[i].flightNo >> f[i].source >> f[i].destination >> f[i].seatsAvailable;
    }

    string dest;
    cout << "Enter destination to search: ";
    cin >> dest;

    for(int i=0; i<n; i++) {
        if(f[i].destination == dest) {
            cout << f[i].flightNo << " " << f[i].source << " " << f[i].destination
                 << " " << f[i].seatsAvailable << endl;
        }
    }

    int num, book;
    cout << "Enter flight number to book seats: ";
    cin >> num;
    cout << "Enter number of seats: ";
    cin >> book;

    for(int i=0; i<n; i++) {
        if(f[i].flightNo == num) {
            f[i].bookSeat(book);
            cout << "Updated seats: " << f[i].seatsAvailable << endl;
            break;
        }
    }

    delete[] f;
}
