// Chapter 25: Inheriting Multiple Inheritance
// MultipleInheritance - a single class can inherit from more than one base class
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

class Bed {
    public:
        Bed() {}
        void sleep() {
            cout << "Sleeping in Bed" << endl;
        }
        int weight;
};

class Sofa {
    public:
        Sofa() {}
        void watchTV() {
            cout << "Watching TV on Sofa" << endl;
        }
        int weight;
};

// SleeperSofa - is both a Bed and a Sofa
class SleeperSofa : public Bed, public Sofa {
    public:
        SleeperSofa() {}
        void foldOut() {
            cout << "Folding out SleeperSofa" << endl;
        }

};

int main() {
    SleeperSofa ss;

    // you can watch TV on a sleep sofa like a sofa..
    ss.watchTV();

    // ..and you can fold it out like a sleeper sofa
    ss.foldOut();

    // ..and sleep on it
    ss.sleep();

    return 0;
}