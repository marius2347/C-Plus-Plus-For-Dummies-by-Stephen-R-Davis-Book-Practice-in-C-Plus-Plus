// Chapter 7: Storing Sequences in Arrays
// ArrayDemo - demonstrate the use of arrays by reading
// a sequence of integers and then displaying them and their sum
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// prototype declarations
int readArray(int integerArray[], int maxNumElements);
int sumArray(int integerArray[], int numElements);
void displayArray(int integerArray[], int numElements);

int main() {

    // input the loop count
    cout << "This program reads a sequence of integers, stores them in an array, "
         << "and then displays the integers and their sum. Terminate the loop by entering a negative number" << endl;
    
    // read numbers to be summed from the user into a local array
    int inputValues[128];
    int numberOfValues = readArray(inputValues, 128);
    
    // now output the values and the sum of the values
    displayArray(inputValues, numberOfValues);
    cout << "The sum of the values is: " << sumArray(inputValues, numberOfValues) << endl;

    return 0;
}

// readArray - read a sequence of integers into an array until the operator enters a negative number
int readArray(int integerArray[], int maxNumElements) {
    int numberOfValues = 0;
    for (numberOfValues = 0; numberOfValues < maxNumElements; numberOfValues++) {
        // fetch another number
        int integerValue = 0;
        cout << "Enter an integer (negative to end sequence): ";
        cin >> integerValue;

        // if it's negative, break the loop
        if (integerValue < 0) {
            break;
        }
        // otherwise, store it in the array
        integerArray[numberOfValues] = integerValue;
    }
    return numberOfValues;
}

// displayArray - display the contents of an array
void displayArray(int integerArray[], int numElements) {
    cout << "The values in the array are: ";
    for (int i = 0; i < numElements; i++) {
        cout << integerArray[i] << " ";
    }
    cout << endl;
}

// sumArray - return the sum of the elements in an array
int sumArray(int integerArray[], int numElements) {
    int accumulator = 0;
    for (int i = 0; i < numElements; i++) {
        accumulator += integerArray[i];
    }
    return accumulator;
}