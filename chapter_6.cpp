// Chapter 6: Creating Functions
// Functions with arugments
// SquareDemo - demonstrate the use of a function which processes arguments
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
// square - returns the square of its argument
// doubleVar - the value to be squared
// returns - square of doubleVar

    double square(double doubleVar) {
        return doubleVar * doubleVar;
    }

    // displayExplanation - displays an explanation of the program
    void displayExplanation() {
        cout << "This program demonstrates the use of a function that calculates "
             << "the square of a number." << endl;
        return;
    }

    // sumSquareSequence - accumulate the square of the number entered at the keyboard into a sequence until a negative number is entered
    double sumSquareSequence() {
        double accumulator = 0.0;

        for (;;) {
            // fetch another number
            double nValue = 0.0;
            cout << "Enter a number (negative to end sequence, empty to end program): ";
            cin >> nValue;

            // if it's negative, break the loop
            if (nValue < 0) {
                break;
            }

            // otherwise, add its square to the accumulator
            double value = square(nValue);
            accumulator += value;
        }

        // return the sum of the squares
        return accumulator;
    }
int main() {

    displayExplanation();
    // Continue to loop until the user enters a negative number
    for (;;) {
        // sum the squares of a sequence of numbers
        double accumulatedValue = sumSquareSequence();

        // if the sum is zero, break the loop
        if (accumulatedValue == 0.0) {
            break;
        }

        // otherwise, display the sum of the squares
        cout << "The sum of the squares is: " << accumulatedValue << endl;
    }

    
}