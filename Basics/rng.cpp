#include <iostream>
// To get the function rand()
#include <cstdlib>
// To get current time
#include <ctime>

using namespace std;

main()
{
    // The time becomes the seed
    srand(time(0));

    cout << "Your random number is " << endl;
    cout << rand() << endl;

    cout << "Your random number between 0 - 5 is" << endl;
    // Remainder of the number
    cout << rand() % 6 << endl;

    cout << "Your random number between 1 - 6 is" << endl;
    cout << (rand()%6) + 1 << endl;
}