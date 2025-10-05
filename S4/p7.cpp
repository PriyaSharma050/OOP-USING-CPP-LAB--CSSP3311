/*7. Call by Reference (Member Function) 
Create a class Time (hours, minutes). Add a member function addTime(Time &t) 
that adds t to the calling object (passed by reference).*/

#include <iostream>
using namespace std;

class Time{
    int hours;
    int minutes;

    public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    void display(){
        cout << hours << " hours " << minutes << " minutes\n";
    }

    void addTime(Time &t){
        minutes += t.minutes;
        hours += t.hours + minutes / 60;
        minutes = minutes % 60;
    }
};

int main(){
    Time t1(2, 45);
    Time t2(1, 30);

    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    t1.addTime(t2);
    cout << "After adding Time 2 to Time 1:\n";
    t1.display();

    return 0;
}
