/*9. Returning Object from Function 
Create a class Time with data members hours and minutes. 
• Write a function addTime(Time t) that adds two time objects and returns a new 
object. 
• Ensure minutes are properly converted into hours if they exceed 60.*/

#include <iostream>
using namespace std;

class Time{
    int hours;
    int minutes;

    public:
    Time(int h = 0, int m = 0){
        hours = h;
        minutes = m;
    }

    Time addTime(Time t){
        int totalMinutes = minutes + t.minutes;
        int totalHours = hours + t.hours + totalMinutes / 60;
        totalMinutes = totalMinutes % 60;
        return Time(totalHours, totalMinutes);
    }

    void display(){
        cout << hours << " hours " << minutes << " minutes\n";
    }
};

int main(){
    Time t1(2, 50);
    Time t2(3, 25);
    Time t3 = t1.addTime(t2);
    t3.display();
    return 0;
}
