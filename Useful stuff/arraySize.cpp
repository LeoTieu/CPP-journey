#include <iostream>
using namespace std;

main()
{
    int myArray[5];
    cout << "The size of the array is" << endl;
    cout << sizeof(myArray) / sizeof(myArray[0]) << endl;
}

/*
How does this work?

sizeof(myArray) gets the amount of bytes used by myArray
sizeof(myArray[0]) gets the amount of 1 element in the array.

Since all elements within the list take the same amount of bytes,
simple algebra makes the trick.

space of 1 element * elements in array = total space of array 
<=>
elements in array = total space of array / space of 1 element


*/