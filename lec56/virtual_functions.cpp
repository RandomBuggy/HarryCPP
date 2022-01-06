/*
 * virtual functions for pointer of base class change the  default behaviour of "pointer to derived class"
 *
 */
#include <iostream>

using namespace std;

class BaseClass {
    public:
        int var_base;
        virtual void display(void) {
            cout << "Displaying base class variable var_base " << var_base << endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        int var_derived;
        void display(void) {
            cout << "Displaying base class variable  var_base " << var_base << endl;
            cout << "Displaying derived class variable var_derived " << var_derived << endl;
        }
};


int main() {
    BaseClass* base_class_pointer = NULL;
    DerivedClass* derived_class_pointer = NULL;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer -> display();
    return 0;
}

