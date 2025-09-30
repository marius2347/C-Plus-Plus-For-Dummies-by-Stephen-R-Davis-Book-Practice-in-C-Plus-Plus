// Chapter 13: Point and Stare at Objects
// LinkedListData - store data in a linked list of objects
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// NameDataSet - stores a person's name 
class NameDataSet {
    public: 
        string sName;
        
        // the link to the next entry in the list
        NameDataSet* pNext;
};

// the pointer to the first entry in the list
NameDataSet* pHead = nullptr;

// add - add a new member to the linked list
void add(NameDataSet* pNDS) {

    // point the current entry to the head of the list
    pNDS -> pNext = pHead;

    // point the head pointer to the current entry
    pHead = pNDS;
}

// getData - read a name and social security number; return null if no more to read
NameDataSet* getData() {

    // read the first name
    string name;
    cout << "Enter a name (or just press Enter to end): ";
    cin >> name;

    // if the name entered is 'exit'
    if (name == "exit") {
        return nullptr;
    }

    // get a new entry and fill in values
    NameDataSet* pNDS = new NameDataSet;
    pNDS -> sName = name;
    pNDS -> pNext = nullptr;

    return pNDS;
}
int main() {
    cout << "Enter names to store in the linked list (type 'exit' to end):" << endl;

    // create another NameDataSet object and add it to the list
    NameDataSet* pNDS;
    while ((pNDS = getData())) {
        add(pNDS);
    }

    // to display the objects, iterate through the list
    cout << "\nThe names in the linked list are:" << endl;
    for (NameDataSet* pCurrent = pHead; pCurrent != nullptr; pCurrent = pCurrent -> pNext) {
        cout << pCurrent -> sName << endl;
    }
}
