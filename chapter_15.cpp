// Chapter 15: "Why Do You Build Me Up, Just To Tern Me Down, Baby?"
// DestructMembers - this program constructs and destructs a member object
//               to demonstrate the order of construction and destruction
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Course {
    public:
        Course() { cout << "Course constructed" << endl; }
        ~Course() { cout << "Course destructed" << endl; }
};

class Student {
    public:
        Student() { cout << "Student constructed" << endl; }
        ~Student() { cout << "Student destructed" << endl; }
};

class Teacher {
    public:
        Teacher() {
            cout << "Teacher constructed" << endl;
            pC = new Course();
        }
        ~Teacher() {
            cout << "Teacher destructed" << endl;
            delete pC;
        }
    protected:
        Course* pC; 
};

class TutorPair {
    public:
        TutorPair() {cout << "TutorPair constructed" << endl; }
        ~TutorPair() {cout << "TutorPair destructed" << endl; }
    
    protected:
        Student student;
        Teacher teacher;

};

TutorPair* fn () {
    cout << "Entering fn()" << endl;
    TutorPair tp;

    cout << "Exiting fn()" << endl;
    cout << "Allocating TutorPair off the heap" << endl;
    TutorPair* ptp = new TutorPair();
    cout << "Returning from fn()" << endl;
    return ptp;
}

int main() {
    cout << "Entering main()" << endl;
    TutorPair* ptp = fn();
    cout << "Back in main()" << endl;
    cout << "Deleting TutorPair from the heap" << endl;
    delete ptp;
}