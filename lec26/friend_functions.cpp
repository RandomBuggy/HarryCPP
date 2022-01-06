/*
 * if a function is outside of a class scope but want to access private data/function member then we can not nest that function or pass object argument directly to access private member 
 * so, a new concept friend is come, to solve above problem make friendship between that particular class-type and that function with "friend" keyword
 *
 * properties of friend function
 *
 * Not in the scope of the friend-class
 * for this reason, cannot be called by dot operator
 *
 * so, friend function is called without object reference
 *
 * usually, take objects as arguments
 *
 * declaration does not matter whatever friend-function is declared in the private section or in the public section, programme will run same
 *
 * can not access member by their name without object reference (dot operator)
 */
#include <iostream>

using namespace std;

class Complex {
    private:
        int a, b;
    public:
        void setNumber(int n1, int n2);
        void getNumber(void);
        friend Complex sumComplex(Complex o1, Complex o2);
} x, y;

void Complex :: setNumber(int n1, int n2) {
    a = n1;
    b = n2;
}

void Complex :: getNumber(void) {
    cout << "The generated Complex number is " << a << " +" << " " << b << "i" << "." << endl;
}

Complex sumComplex(Complex o1, Complex o2) {
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main() {
    x.setNumber(40, 45);
    x.getNumber();
    y.setNumber(45, 30);
    y.getNumber();
    Complex sum;
    sum = sumComplex(x, y);
    sum.getNumber();
    cout << " " << endl;
    return 0;
}

