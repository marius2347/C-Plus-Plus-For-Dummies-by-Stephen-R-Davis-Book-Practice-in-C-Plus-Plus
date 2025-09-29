// Chapter 2: Declaring Variables Consistently
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    // declare two long int variables and set them to 1
    long int lVariable1;
    long lVariable2; // int is assumed
    lVariable1 = lVariable2 = 1;

    // declare a variable of type double and set it to 1.0
    double dVariable = 1.0; dVariable = 1.0;

    int nVariable = 1; // declare a variable and initialize it to 1

    const double PI = 3.14159; // declare a constant variable

    // in the following expression the value of nValuel
    // is converted into a double before performing the assignment
    int nValuel = 1;
    nValuel + 1.0;

    // in the following assignment, the whole
    // number part of fVariable is stored into nVariable
    nVariable = dVariable;

    int var1;
    decltype(var1) var2; // declare var2 to be of the same type as var1




    return 0;
}