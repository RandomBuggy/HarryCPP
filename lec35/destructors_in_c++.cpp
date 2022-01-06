/*
 * as constructor is used to auto assign property of a object, destructor is used to erase a object's dynamically allocated memory.
 *
 * destructor never accept argument and return anything even void also.
 *
 * when a programme or a block of code exit then c++ compiler automatically call the destructor with implicit method
 *
 * destructor name must be class name but start with this "~" sign
 */
#include <iostream>
std :: int count = 0;

using namespace std;

class Num {
    public:
    Num(void) {
        count++;
        cout << "This is the time when constructor is called for the object number" << count << endl;
    }
        ~Num() {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
        }
};

int main() {
    cout << "We are inside our main function" << endl;
    cout << "Creating two objects....." << endl;
    cout << endl << endl;
    cout << "Creating first object....." << endl;
    Num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}

