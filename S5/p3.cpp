/*3. Library Book Management 
Concepts: Array of objects, searching, string handling 
Problem: 
Create a class Book with members: bookID, title, author, and price. 
• Read details for n books into an array. 
• Implement a function to search for a book by author name. 
• Display all books written by that author. 
Extension: 
Allow partial match search using string::find(). */

#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
    int bookID;
    string title, author;
    double price;
};

int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    Book books[n];

    for(int i=0;i<n;i++) {
        cout<<"Enter book's ID: ";
        cin >> books[i].bookID;
        cout<<"Enter book's title: ";
        getline(cin>>ws,books[i].title);
        cout<<"Enter book's author: ";
        getline(cin>>ws,books[i].author);
        cout<<"Enter book's price: ";
        cin >> books[i].price;
    }

    string key;
    cout<<"Enter author name to search his/her books: ";
    getline(cin>>ws, key);

    for(int i = 0; i < n; i++) {
        if (books[i].author.find(key) != string::npos) {
            cout << books[i].bookID << " "
                 << books[i].title << " "
                 << books[i].author << " "
                 << books[i].price << endl;
        }
}
}