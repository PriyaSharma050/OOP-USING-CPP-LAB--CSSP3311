/*8. Call by Pointer (Member Function) 
Define a class Account (balance). Add a member function transfer(Account *acc, 
int amount) that transfers money from the calling object to the account pointed 
by acc.*/

#include <iostream>
using namespace std;

class Account{
    int balance;

    public:
    Account(int b) {
        balance = b;
    }

    void display(){
        cout << "Balance: " << balance <<"\n";
    }

    void transfer(Account *acc, int amount){
        if (balance >= amount) {
            balance -= amount;
            acc->balance += amount;
            cout << "Transferred " << amount << " successfully.\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }
};

int main(){
    Account acc1(5000);
    Account acc2(3000);
    cout << "Initial balances:\n";
    acc1.display();
    acc2.display();
    acc1.transfer(&acc2, 1500);
    cout << "Balances after transfer:\n";
    acc1.display();
    acc2.display();

    return 0;
}
