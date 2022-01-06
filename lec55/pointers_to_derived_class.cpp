#include <iostream>

using namespace std;

class BaseClass {
    public:
        int var_base;
        void display(void) {
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
    BaseClass obj_base;
    DerivedClass obj_derived;
    BaseClass* base_class_pointer = NULL;
    base_class_pointer = &obj_derived; /* base class pointer can point to derived class object but any method call will run base class method because pointer is base class pointer*/
    base_class_pointer -> var_base = 3400;
    base_class_pointer -> display();
    DerivedClass* derived_class_pointer = NULL;
    derived_class_pointer = &obj_derived;
    derived_class_pointer -> var_base = 3;
    derived_class_pointer -> var_derived = 9;
    derived_class_pointer -> display();
    return 0;
}

