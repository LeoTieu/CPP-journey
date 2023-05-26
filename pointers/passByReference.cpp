#include <iostream>
using namespace std;

// Only changing x locally.
void passByValue(int x){
    x = 20;
}
// Notice that we are changing the pointer of x.
// So x is directly changed globally,
// And not locally.
void passByReference(int *x){
    *x = 66;
}

main()
{
    int var_1 = 13;
    int var_2 = 13;

    passByValue(var_1);
    // Pass in the memory slot number
    passByReference(&var_2);
    
    cout << "var 1 is now " << var_1 << endl;
    cout << "var 2 is now " << var_2 << endl;
}

