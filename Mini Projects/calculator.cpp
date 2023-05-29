#include <iostream>

using namespace std;

main()
{
    int numberOne;
    int numberTwo;

    cout << "Enter first number - ";
    cin >> numberOne;

    cout << "\nEnter second number - ";
    cin >> numberTwo;

    int userInput;
    cout << "What do you want to do? Enter number" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cin >> userInput;

    cout << "\n";
    switch(userInput){
        case 1: cout << numberOne + numberTwo; break;
        case 2: cout << numberOne - numberTwo; break;
        case 3: cout << numberOne * numberTwo; break;
        default: cout << "You did not enter correctly"; break;
    }
    return 0;
}