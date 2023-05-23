#include <iostream>
#include <string>
using namespace std;

class cat{
    // public so main can use it
    public:
        // Constructor
        // Initliazes at the object creation.
        cat(string catName){
            name = catName;
        }
        void meow(){
            cout << "Meow meow meow" << endl;
        }
        void changeName(string catName){
            name = catName;
        }
        string getName(){
            return name;
        }
    // Only functions within the object
    // can reach the variablea;  name.
    private:
        string name;
};

int main()
{
    cat myCat("kitten");
    myCat.meow();
    cout << myCat.getName() << endl;

}
