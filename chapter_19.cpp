// Chapter 19: Inheriting a Class
// InheritanceExample - demonstrate an inheritance relationship in which the subclass constructor passes argument information to the constructor in the base class
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Advisor{}; // define an empty class

class Student 
{
    public:
        Student(const char *pName = "no name") : name(pName), average(0.0), semesterHours(0) {
            cout << "Student constructor called for " << name << endl;
        }
        void addCourse(int hours, float grade) {
            cout << "Adding grade to " << name << endl;
            average = semesterHours * average + grade;
            semesterHours += hours;
            average /= semesterHours;
            cout << "New average for " << name << " is " << average << endl;
        }
        
        int hours() {
            return semesterHours;
        }

        float gpa() {
            return average;
        }

    protected:
        string name;
        double average;
        int semesterHours;
};

class GraduateStudent : public Student {
    public:
        GraduateStudent(const char *pName, Advisor adv, double qG = 0.0) :
            Student(pName), advisor(adv), qualifierGrade(qG) {
            cout << "GraduateStudent constructor called for " << pName << endl;
        }
        double qualifier() {
            return qualifierGrade;
        }

    protected:
        Advisor advisor;
        double qualifierGrade;
};

int main() {

    // create a dummy advisor to give to GraduateStudent
    Advisor adv;

    // create two Student types
    Student s1("Fred");
    GraduateStudent gs1("Mary", adv, 3.5);

    // add a grade to their grade point average 
    s1.addCourse(3, 3.0);
    gs1.addCourse(3, 4.0);

    // display the graduate student's qualifier grade
    cout << "Graduate student " << gs1.hours() << " hours, GPA " << gs1.gpa() << ", qualifier " << gs1.qualifier() << endl;
    return 0;
}