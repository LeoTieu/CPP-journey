#include <iostream>
using namespace std;

main()
{   
    // Basic for loop
    for(int i = 1; i != 20; i++){
        cout << i << endl;
    }

    // For each loop
    int numbers[] {1,2,3,4,5,6,7,8,9,10};
    for(int number : numbers){
        cout << number << endl;
    }
}
