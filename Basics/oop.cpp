#include <iostream>
using namespace std;

class cat{
    // public so main can use it
    public:
        void meow(){
            cout << "Meow meow meow" << endl;
        }
        void purr(){
            cout << "purrr" << endl;
        }
};

int main()
{
    cat myCat;
    myCat.meow();
    myCat.purr();
}
