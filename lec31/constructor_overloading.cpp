/*
 * constructor overloading is almost same concept as function oberloading
 * so, lets implement this
 */
#include <iostream>

using namespace std;



class Complex {
    int a, b;
    public:
    Complex(void) {
        a = 0;
        b = 0;
    }
    Complex(int x) {
        a = x;
        b = 0;
    }
    Complex(int x, int y) {
        a = x;
        b = y;
    }
    void printNumber(void) {
        cout << "The generated complex number is " << a << "+" << b << "i" << endl;
    }
};



int main() {
    Complex a, b(3), c(5, 8);
    a.printNumber();
    b.printNumber();
    c.printNumber();
    return 0;
}

