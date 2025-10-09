// Chapter 17: Copy / Move Constructor
// CopyConstructor - create a new object as a copy of an existing object
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student {
    public:
        // conventionally define a constructor
        Student (const char *pName = "no name", int ssId = 0): name(pName), id(ssId) {
            cout << "Student constructed " << name << endl; 

        }

        // define a copy constructor
        Student (const Student &s):  name("Copy of " + s.name), id(s.id) {
            cout << "Student copy-constructed " << name << endl; 
        }

        ~Student() {
            cout << "Student destructed " << name << endl; 
        }

    protected:
        string name;
        int id;

};

// fn receive its argument by value, which means a copy of the argument is made
void fn (Student copy) {
    cout << "In fn()" << endl;
}

int main() {
    Student scruffy("Scruffy", 12345); // calls constructor
    cout << "Before fn()" << endl;
    fn(scruffy); // calls copy constructor to make a copy of scruffy
    cout << "After fn()" << endl;
    return 0;
}