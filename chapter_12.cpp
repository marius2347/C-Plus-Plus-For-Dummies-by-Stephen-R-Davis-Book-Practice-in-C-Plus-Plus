// Chapter 12: Adding Classess to C++
// CallMemberFunction - define and invoke a function that's a member of the class Student
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student {

    public:
    // add a completedd course to the record
    double addCourse(int hours, double grade) {
        // calculate the sum of all courses time
        // the average grade
        double weightedGPA;
        weightedGPA = semesterHours * gpa;

        // now add in the new course
        semesterHours += hours;
        weightedGPA += (hours * grade);
        gpa = weightedGPA / semesterHours;

        // return the new gpa
        return gpa;
    }

    int semesterHours;
    double gpa;

};
int main() {

    // create a Student object and initialize it
    Student s;
    s.semesterHours = 3;
    s.gpa = 3.0;

    // the values before the call
    cout << "Before the course: hours = " << s.semesterHours << ", gpa = " << s.gpa << endl;
    
    // the following subjects the data members of the s
    // object to the member function addCourse()

    cout << "After adding a 3 hour course with a grade of 4.0, the new gpa is: ";
    cout << s.addCourse(3, 4.0) << endl;

    // the values after the call
    cout << "After the course: hours = " << s.semesterHours << ", gpa = " << s.gpa << endl;
 

    return 0;
}