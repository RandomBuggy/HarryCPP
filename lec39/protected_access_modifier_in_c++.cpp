/*
 * protected access of a class member means security level same as private but inheritable
 *
 * in public derivation public member are public and protected member are protected
 *
 * in protected derivation public member are protected and protected member are also protected
 *
 */
#include <iostream>

using namespace std;

class Base {
    protected:
        int c;
    private:
        int a, b;
};

class Derived : protected Base {

};

int main() {
    Base b;
    Derived d;
    //cout << b.c; will not work since a is protected in both derive and base class
    return 0;
}

