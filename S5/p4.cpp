/*4. Cricket Player Statistics 
Concepts: Array of objects, sorting based on member variable 
Problem: 
Design a class Cricketer with members: playerName, matches, runs, average. 
• Read data for n players. 
• Calculate average = runs / matches. 
• Sort and display players in descending order of average runs. 
Hint: 
Use a sorting algorithm (like bubble sort) with object swapping.
*/

#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string playerName;
    int matches, runs;
    double average;
};

int main() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;
    Cricketer p[n];

    for(int i=0;i<n;i++) {
        cout << "Enter player name: ";
        getline(cin >> ws, p[i].playerName);
        cout << "Enter matches played: ";
        cin >> p[i].matches;
        cout << "Enter runs scored: ";
        cin>> p[i].runs;
        p[i].average = (double)p[i].runs / p[i].matches;
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(p[j].average < p[j+1].average) 
                swap(p[j], p[j+1]);
        }
    }

    cout << "Players sorted by average runs (descending order):" << endl;
    for(int i=0;i<n;i++){
        cout << p[i].playerName << " "
             << p[i].matches << " "
             << p[i].runs << " "
             << p[i].average << endl;
    }
}
