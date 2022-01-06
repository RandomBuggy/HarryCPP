#include <iostream>
#include <string>
/*
 * c++ --> was called --> c with classes
 * class --> extension of structure (in C)
 * structure had limitations:
 *      * members are public
 *      * no methods
 * 
 * class have:
 *      * structure and more
 *      * methods and properties
 *      (method means custom data type's own function and property means it's value)
 *      * few public member or few private member
 *      * by default class member are private
 *
 *
 * structure in C++ are typedefed
 *
 *
 * you can declare objects along with the class declaration
 * like :
 *      class employee {
 *          class definition;
 *      } x, y, z;
 *
 *
 * x.id = 01 makes no sense if id named member is private
 *
 * nesting of member function
 * if a function is called inside another function of the same class then it will run because of being within a single object-data unit, either the function is private or public it does not matter. but private function can not be accessed directly with dot operator but can be called by other functions of same object and this is called nesting of member function
 *
 */
using namespace std;

class Binary {
    string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones_complement(void);
        void display(void);
};

void Binary :: read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
    chk_bin();
}

void Binary :: chk_bin(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary :: ones_complement(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '1') {
            s.at(i) = '0';
        }
        else {
            s.at(i) = '1';
        }
    }
}

void Binary :: display(void) {
    for (int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    }
    cout << endl;
}
int main() {
    Binary S;
    S.read();
    S.chk_bin();
    S.display();
    S.ones_complement();
    S.display();
    cout << " " << endl;
    return 0;
}

