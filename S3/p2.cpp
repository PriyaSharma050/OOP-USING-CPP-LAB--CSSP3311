/*2. Multiple Objects 
Create a class Book with data members title, author, and price. Write a program to 
create three objects of Book, initialize them with user input, and display their details.*/

#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
    string title;
    string author;
    double price;

    void input(){
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
    }

    void display(){
        cout << "Title: " << title << "  Author: " << author << "  Price: " << price << "  ";
    }
};

int main(){
    Book b1, b2, b3;

    cout << "Enter details for Book 1:\n";
    b1.input();

    cout << "Enter details for Book 2:\n";
    b2.input();

    cout << "Enter details for Book 3:\n";
    b3.input();

    cout << "\nBook 1 details:\n";
    b1.display();
    cout << "\nBook 2 details:\n";
    b2.display();
    cout << "\nBook 3 details:\n";
    b3.display();

    return 0;
}
