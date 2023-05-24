#include <iostream>
using namespace std;

main()
{   
    // For loop, range
    for(int i = 1; i != 20; i++){
        cout << i << endl;
    }

    // For each loop
    int numbers[] {1,2,3,4,5,6,7,8,9,10};
    for(int number : numbers){
        cout << number << endl;
    }

    // while true loop + break
    int x = 0;
    while(true){
        x++;
        // Exits loop if x = 10
        if(x == 10){
            break;
        }
    }
}
