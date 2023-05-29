// A void pointer can point to any variable type.
// However, it can't be directly dereferenced.

#include <iostream>
using namespace std;

void print(void *pointer, char type){
    switch(type){
        case 'i': cout << *((int*)pointer) << endl; break;
        case 'c': cout << *((char*)pointer) << endl; break;
    }
}

main()
{
    int myNumber = 5;
    char myCharacter = 'l';
    print(&myNumber, 'i');
    print(&myCharacter, 'c');
    return 0;
}