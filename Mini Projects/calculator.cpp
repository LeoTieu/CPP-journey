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

    int sum;
    sum = numberOne + numberTwo;
    cout << "\nThe sum of your numbers is " << sum;
    
    return 0;
}