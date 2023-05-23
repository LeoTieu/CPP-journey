#include <iostream>

using namespace std;

// Write this at top or
void myFunction();

// Create the function at the top
void myFunction2(){
    cout << "This is also a void function" << endl;
}

main()
{
    myFunction();
    myFunction2();
}

void myFunction(){
    // Void functions don't return anything.
    cout << "This is a void function" << endl;
}