// Chapter 26: Tempting C++ Templates
// MaxTemplate - create a template max() function that returns the greater of 2 types
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

template <class T> T maximum(T t1, T t2) {
    return (t1 > t2) ? t1 : t2;
}

int main() {

    // find the maximum of 2 ints
    // here C++ creates maximum(imt, int)

    cout << "Max of 2 and 3 is: " << maximum(2, 3) << endl;

    // repeat for 2 doubles
    // in this case, we have to provide T explicitly since
    // 2.5 and 1.5 are treated as double literals

    cout << "Max of 2.5 and 1.5 is: " << maximum<double>(2.5, 1.5) << endl;
}