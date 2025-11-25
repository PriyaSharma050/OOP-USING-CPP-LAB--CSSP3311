/* 1. Student Result Management System 
Concepts: Array of objects, data input/output, aggregation logic 
Problem: 
Create a class Student with members: rollNo, name, marks[5], and total. 
• Use an array of Student objects to store data of n students. 
• Calculate and display the total marks and the student with the highest total. 
Hint: 
Loop through array, call member functions for input and calculation. */

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int rollNo, marks[5], total;
    string name;

    void input(){
        cout<<"Enter rollNo ";
        cin>>rollNo;
        cout<<"Enter name ";
        getline(cin>>ws, name);
        for(int i=0; i<5; i++){
            cout<<"Enter marks of subject "<<i+1<<" : ";
            cin>>marks[i];
        }
    }
};

int totalMarks(Student &s){
    s.total=0;
    for(int i=0; i<5; i++){
        s.total+=s.marks[i];
    }
    return s.total;
}

int main(){
    int n;
    cout<<"Enter the number of students ";
    cin>>n;
    Student arr[n];
    for(int i=0; i<n ; i++){
        arr[i].input();
        totalMarks(arr[i]);
    }
    for(int i=0; i<n ; i++){
        cout<<"Total marks of "<<arr[i].name<<" is "<<arr[i].total<<endl;
    }

    int highestTotal= arr[0].total, index = 0;
    for(int i=1; i<n ; i++){
        int t = arr[i].total;
        if(t>highestTotal){
            highestTotal=t;
            index=i;
        }
    }

    cout<<"Student with highest total is "<<arr[index].name<<" with total marks "<<highestTotal<<endl;
    return 0;
}