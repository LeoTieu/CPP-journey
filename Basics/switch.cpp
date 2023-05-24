#include <iostream>
using namespace std;

main()
{
    int x;
    cout << endl << "What do you want to do?" << endl;
    cout << "1. See a quote" << endl;
    cout << "2. See a number" << endl;
    cout << "3. Exit" << endl;
    cin >> x;
    switch(x){
        case 1:
            cout << "A true master is an eternal student - Master yi" << endl;
            break;
        case 2:
            cout << "5";
        case 3:
            return 0;
    }
    }
