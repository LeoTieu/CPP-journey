#include <iostream>
using namespace std;

void printNumber(int num){
    cout << "I am printing an integer " << num << endl;
}

void printNumber(float num){
    cout << "I am printing a float " << num << endl;
}

main()
{
    int num1 = 23;
    float num2 = 32.123;
    printNumber(num1);
    printNumber(num2);
}