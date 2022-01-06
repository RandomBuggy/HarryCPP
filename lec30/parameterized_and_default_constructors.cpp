/*
 * there are two type of constructor. 1.default(with no parameters) and 2.parameterized constructor(with parameters).
 *
 * default constructors are automatically invoked during object declaration
 *
 * but parameterized constructor have two way to call. 1.implicit call and 2.explicit call 
 * 1.implicit call:- first way is pass parameter/argument with object using parenthesis 
 * 2.explicit call:- second way is pass parameter/argument with assignment operator, after assignment operator just call the constructor and pass the parameter.
 *
 *
 *
 */
#include <iostream>
#include <math.h>

using namespace std;

class Complex {
    int a, b;
    public:
        Complex(int, int);
        void printNumber(void);
};

Complex :: Complex(int p, int q) {
    a = p;
    b = q;
}

void Complex :: printNumber(void) {
    cout << "The generated complex number is " << a << "+" << b << "i" << endl;
}

class Point {
    int m, n;
    public:
    Point(int x, int y) {
        m = x;
        n = y;
    }
    void displayPoint(void) {
        cout << "The Co-ordinate point is (" << m << ", " << n << ")" << endl;
    }
    friend void distance(Point, Point);
};

void distance(Point e, Point f) {
    int res = sqrt(((f.m - e.m) * (f.m - e.m)) - ((f.n - e.n) * (f.n - e.n)));
    cout << "Distance between (" << e.m << ", "  << e.n << ") and (" << f.m << ", " << f.n << ") is " << res << endl;
}

int main() {
    Complex a(3, 4);
    Complex b = Complex(17, 34);
    a.printNumber();
    b.printNumber();
    Point c(4, 6), d(9, 7);
    c.displayPoint();
    d.displayPoint();
    distance(c, d);
    return 0;
}

