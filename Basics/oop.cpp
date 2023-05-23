#include <iostream>
#include <string>
using namespace std;

class cat{
    // public so main can use it
    public:
        void meow(){
            cout << "Meow meow meow" << endl;
        }
        void setName(string catName){
            name = catName;
        }
        string getName(){
            return name;
        }
    // Only functions within the object
    // can reach the variable name.
    private:
        string name;
};

int main()
{
    cat myCat;
    myCat.meow();
    myCat.setName("kitten");
    cout << myCat.getName() << endl;

}
