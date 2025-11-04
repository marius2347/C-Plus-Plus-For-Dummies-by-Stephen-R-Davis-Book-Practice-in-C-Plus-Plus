// Chapter 27: Standardizing on the Standard Template Library (STL)
// STLListStudents - use a list to contain and sort a user defined class
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <list>
using namespace std;

// Student - some example user defined class
class Student {

    public:
       Student(const char* pszS, int id) : sName(pszS), ssID(id) {}

       string sName;
       int ssID;
};

// the following function is required to support the sort operation
bool operator<(const Student& s1, const Student& s2) {
    return s1.ssID < s2.ssID;
}

// displayStudents - iterate through the list and display each student
void displayStudents(list<Student>& students) {

    // allocate an iterator that points to the first element in the list
    // list<Student>::iterator iter = students.begin();
    auto iter = students.begin();

    // continue to loop through the list until the iterator hits the end of the list
    while (iter != students.end()) {

        // retrieve the Student the iterator is pointing to
        Student& s = *iter;
        cout << "Student Name: " << s.sName << ", ID: " << s.ssID << endl;

        // advance the iterator to point to the next element in the list
        iter++;
    }
}

int main() {
    // define a collection of students using a list
    list<Student> students;

    // add three students to the list
    students.push_back(Student("John Smith", 1234));
    students.push_back(Student("Jane Doe", 4321));
    students.push_back(Student("Albert Einstein", 3141));

    // display the students before sorting
    cout << "Students before sorting:" << endl;
    displayStudents(students);

    // sort the students by ID
    students.sort();
    // display the students after sorting
    cout << "Students after sorting:" << endl;
    displayStudents(students);

}