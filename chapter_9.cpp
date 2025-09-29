// Chapter 9: Taking a Second Look at C++ Pointers
// DisplayString - display an array of characters both using a pointer and an array index
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

    // declare a string
    const char* szString = "Randy";
    cout << "The string is: " << szString << endl;

    // display the string as an array
    cout << "Displaying the string as an array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << szString[i];
    }
    
    // now using typical pointer arithmetic
    cout << "\nDisplaying the string using pointer arithmetic: ";
    const char* pszString = szString;
    while (*pszString)
    {
        cout << *pszString;
        pszString++;
    }

    return 0;
}

