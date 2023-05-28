#include <iostream>
using namespace std;

main()
{
    int myArray[3];
    int *myPointer = &myArray[0];

    cout << "myPointer points at " << myPointer << endl;
    cout << "myArray[0] is at " << &myArray[0] << endl;
    cout << "myArray[1] is at " << &myArray[1] << endl;
    cout << "myArray[2] is at " << &myArray[2] << endl;
    // Traverses 2 memory slots.
    // Does not add 2.
    myPointer += 2;
    cout << "myPointer points at " << myPointer << endl;
}