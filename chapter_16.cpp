// Chapter 16: Making Constructive Arguments
// OverloadConstructor - provide the class multiple ways to create objects by overloading the constructor
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student 
{
    public:
        Student () {
            cout << "Student constructed No Name" << endl; 
            name = "No Name";
            semesterHours = 0;
            gpa = 0.0;
        }

        Student (const char *pName) {
            cout << "Student constructed " << pName << endl; 
            name = pName;
            semesterHours = 0;
            gpa = 0.0;
        }

        Student (const char *pName, int hours, double g) {
            cout << "Student constructed " << pName << endl; 
            name = pName;
            semesterHours = hours;
            gpa = g;
        }

        protected:
            string name;
            int semesterHours;
            double gpa;
};

int main() {

    // the following three objects are created using different constructors
    Student s1; // calls default constructor
    Student s2("Jane Doe"); // calls constructor with one argument
    Student s3("John Smith", 30, 3.5); // calls constructor with three arguments
    return 0;
}