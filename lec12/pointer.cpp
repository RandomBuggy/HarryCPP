/*
 * pointer is the same concept as c in c++.
 *
 * new is pointer to pointer 
 */
#include <iostream>

using namespace std;

int main() {
    int a = 3;
    int* b = &a;
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;
    cout << "The value at address a is " << *b << endl;

    /* pointer to pointer */
    int** c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at_address(at_address(c)) is " << **c << endl;
    cout << " " << endl;
    return 0;
}

