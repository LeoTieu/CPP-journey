#include <iostream>

using namespace std;

// Write this at top or create it at the top.
void myFunction();

// Function with parameters.
int multiply(int x = 5, int y = 7){
    return x * y;
};

main()
{
    myFunction();
    cout << multiply();
}

void myFunction(){
    // Void functions don't return anything.
    cout << "This is a void function" << endl;
}