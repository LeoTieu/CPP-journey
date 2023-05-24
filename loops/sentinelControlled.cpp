// A sentinel controlled loop is used when you don't know
// how many times it is going to run. Like when user is going
// to input a bunch of numbers but we don't know how many.

#include <iostream>
using namespace std;

main()
{
    int age = 0;
    int ageTotal = 0;
    int amountOfPeople = -1;

    while(age != -1){
        amountOfPeople ++;
        ageTotal = ageTotal + age;
        cout << "Enter age of person or -1 to quit." << endl;
        cin >> age;
    }
    cout << "Number of people entered is - " << amountOfPeople << endl;
    cout << "Average age is - " << ageTotal/amountOfPeople << endl;
}