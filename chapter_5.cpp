// Chapter 5: Controlling Program Flow
// NestedDemo - input a series of numbers. Continue to accumulate the sum of these numbers until the user enters a 0. Repeat the process until the sum is 0.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    
    // the outer loop for multiple accumulations
    cout << "Enter numbers to accumulate (0 to stop): " << endl;

    int accumulator;
    // continue to accumulate sequences
    for (;;) {

        // start entering the next sequenceo of numbers
        accumulator = 0;
        cout << "Start a new accumulation (enter 0 to stop): " << endl;

        // loop forever
        for (;;) {
            // fetch another number
            int nValue = 0;
            cout << "Enter a number: ";
            cin >> nValue;

            // if it's zero, break out of the inner loop
            if (nValue == 0) {
                cout << "Zero entered. Stopping accumulation." << endl;
                break;
            }

            // otherwise, accumulate the value
            accumulator += nValue;
        }

        // exit the loop if the total accumulated is zero
        if (accumulator == 0) {
            cout << "Total accumulated is zero. Exiting." << endl;
            break;
        }
        // output the accumulated value
        cout << "The accumulated value is: " << accumulator << endl;

    }
    return 0;
}