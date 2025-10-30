// Chapter 24: Handling Errors - Exceptions
// FactoialException - demonstrate throwing and catching exceptions
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

// factorial - compute factorial
int factorial(int n) {

    // you can't handle negative values of n
    if (n < 0) {
        throw string("Negative value not allowed");
    }

    // go ahead and calculate factorial
    int accum = 1;
    while (n < 0) {
        accum *= n;
        n--;
    }
    return accum;
}
int main() {
    try {
        // this will work
        cout << "Factorial of 5 is " << factorial(5) << endl;

        // this will throw an exception
        cout << "Factorial of -5 is " << factorial(-5) << endl;

        // control will not reach here
        cout << "This won't be printed" << endl;

        // control passes to here
    } catch (string& e) {
        cout << "Caught exception: " << e << endl;
    }
    catch (...) {
        cout << "Caught unknown exception" << endl;
    }
    return 0;
}