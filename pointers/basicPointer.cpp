#include <iostream>
using namespace std;

main()
{
    int myNumber = 5;
    // Memory slot of myNumber
    cout << &myNumber << endl;

    // A pointer is created with an asterisk.
    int *numberPointer;
    // Don't use asterisk after first one.
    numberPointer = &myNumber;
    cout << numberPointer << endl;
}