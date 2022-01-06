/*
 * copy constructor is a constructor which takes arguments of same class object reference and assign the exact properties of the referenced object
 *
 * so, during initialization copy constructor invoked but already initialized copy constructor does not invoked
 *
 * if, no copy constructor is supplied then compiler supplies its own  copy constructor for all the class of a programme
 */
#include <iostream>

using namespace std;
class Number {
    int a;
    public:
    Number(void) {
        a = 0;
    }
    Number(int n) {
        a = n;
    }
    Number(Number &);
    void display(void) {
        cout << "The number for this object is " << a << endl;
    }
};

Number :: Number(Number &obj) {
    cout << endl;
    a = obj.a;
}

int main() {
    Number x, y, z(14);
    x.display();
    y.display();
    z.display();
    Number z1;
    z1 = z;
    z1.display();
    Number z2(z);
    z2.display();
    y = z;
    y.display();
    return 0;
}

