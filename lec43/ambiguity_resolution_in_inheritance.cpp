/*
 * many there are methods of same name in different class. so,while inheriting specially in multiple inheritance, compiler get confused which method is to call of same name. remember method/function overloading happens in the same class, but in inheritance these ambiguous methods are presents in different class
 *
 * so, to solve the issue, make another method in the derived class and call with nested-member-function-calling way with scope resolution operator
 *
 * if same-named-method also exists before inheriting from base class then derived class method will override base classs's method and use its own
 */
#include <iostream>

using namespace std;

class Base1 {
    public:
        void greet(void) {
            cout << "Hi, Good Morning!!!" << endl;
        }
};

class Base2 {
    public:
        void greet(void) {
            cout << "How are you?" << endl;
        }
};

class Derived : public Base1, public Base2 {
    public:
        void greet(void) {
            Base1 :: greet();
        }
};

class B {
    public:
        void say(void) {
            cout << "blank" << endl;
        }
};

class D {
    public:
        void say(void) {
            cout << """""&""""" << endl;
        }
};

int main() {
    Base1 base1obj;
    Base2 base2obj;
    Derived dobj;
    base1obj.greet();
    base2obj.greet();
    dobj.greet();
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}

