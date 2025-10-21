// Chapter 22: A New Assignment Operator, Should You Decide to Accept it
// DemoMoveOperator - demonstrate the move operator
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

class MyContainer {
    
    public:
        // constructor
        MyContainer(int nS, const char* pS): nSize(nS) {
            pString = new char[nSize];
            strcpy(pString, pS);
        }

        // destructor
        ~MyContainer() {
            delete pString;
            pString = nullptr;
        }

        // copy constructor
        MyContainer(const MyContainer& s) {
            copyIt(*this, s);
        }

        MyContainer& operator = (MyContainer& s) {
            delete pString;
            copyIt(*this, s);
            return *this;
        }

        // move constructor
        MyContainer(MyContainer&& s) {
            moveIt(*this, s);
        }

        MyContainer& operator = (MyContainer&& s) {
            delete pString;
            moveIt(*this, s);
            return *this;
        }

    protected:
        static void moveIt(MyContainer& tgt, MyContainer& src) {
            cout << "Moving " << src.pString << endl;
            tgt.nSize = src.nSize;
            tgt.pString = src.pString;
            src.nSize = 0;
            src.pString = nullptr;
        }
        static void copyIt(MyContainer& tgt, const MyContainer& src) {
            cout << "Copying " << src.pString << endl;
            delete tgt.pString;
            tgt.nSize = src.nSize;
            tgt.pString = new char[tgt.nSize];
            strncpy(tgt.pString, src.pString, tgt.nSize);
        }

        int nSize;
        char* pString;
};

MyContainer fn(int n, const char* pString) {
    MyContainer temp(n, pString);
    return temp;
}

int main() {
    MyContainer a(20, "This is a test");
    MyContainer b = fn(30, "This is another test");
    a = fn(40, "This is yet another test");
    return 0;
}