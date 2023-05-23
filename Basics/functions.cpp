#include <iostream>

using namespace std;

// Write this at top or create it at the top.
void myFunction();

// Function with parameters.
int multiply(int x, int y){
    int answer = x * y;
    return answer;
}

main()
{
    myFunction();
    cout << multiply(5, 7);
}

void myFunction(){
    // Void functions don't return anything.
    cout << "This is a void function" << endl;
}