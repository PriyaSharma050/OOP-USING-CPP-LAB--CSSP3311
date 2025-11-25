/*7
 ️. Multiple Inheritance (Moderate) 
Topic: Combining Features of Multiple Classes 
Problem: 
Create class Teacher with member subject and class Researcher with member 
area_of_research. 
Derive a class TeachingAssistant from both, and display details of a TA. 
Learning Outcome: Handling data and ambiguity in multiple inheritance. */

#include <iostream>
#include <string>
using namespace std;

class Teacher {
protected:
    string subject;
public:
    void setSubject(const string& sub) {
        subject = sub;
    }
    string getSubject() const {
        return subject;
    }
};

class Researcher {
protected:
    string area_of_research;
public:
    void setAreaOfResearch(const string& area) {
        area_of_research = area;
    }

    string getAreaOfResearch() const {
        return area_of_research;
    }
};

class TeachingAssistant : public Teacher, public Researcher {
private:
    string name;
public:
    void setName(const string& n) {
        name = n;
    }

    string getName() const {
        return name;
    }

    void displayDetails() const {
        cout << "TA Name: " << name << endl;
        cout << "Subject: " << getSubject() << endl;
        cout << "Area of Research: " << getAreaOfResearch() << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.setName("Ajay");
    ta.setSubject("Computer Science");
    ta.setAreaOfResearch("AI and Machine Learning");
    ta.displayDetails();

    return 0;
}
