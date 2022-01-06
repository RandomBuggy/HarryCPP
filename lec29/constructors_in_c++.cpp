/*
 * till mow, we have seen that in a class, first create a object using class-template then you can set data(initialize data) with dot operator and this class-member-functions.
 * 
 * but if we want to do the both means object declaration+initialization at the same time, here the constructor concept begins.
 *
 * so, constructor is a special type of member-function of a class, which is called automatically (no need to call with dot operator). for this speciality of constructor it used to initialize object-value at the time of declaration. a function to be a constructor , the name of the function must be same to same (even punctuation+capitalization) as the class name
 *
 * constructor return type does not exist
 *
 * should be declared in the public section
 *
 * constructor can have default argument
 *
 * we can not refer to constructor's address
 *
 */
#include <iostream>

using namespace std;

class Complex {
    int a, b;
    public:
        Complex(void);
        void printNumber(void);
};

Complex :: Complex(void) {
    a = 13;
    b = 17;
}

void Complex :: printNumber(void) {
    cout << "The generated complex number is " << a << "+" << b << "i" << endl;
}

int main() {
    Complex a, b, c;
    a.printNumber();
    b.printNumber();
    c.printNumber();
    return 0;
}

