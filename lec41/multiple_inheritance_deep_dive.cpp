#include <iostream>

using namespace std;

class Base1 {
    protected:
        int base1int;
    public:
        void set_base1int(int a) {
            base1int = a;
        }
};

class Base2 {
    protected:
        int base2int;
    public:
        void set_base2int(int a) {
            base2int = a;
        }
};

class Derived : public Base1, public Base2 {
    public:
        void display(void) {
            cout << "The value of base1int is " << base1int << endl << "The value of base2int is " << base2int << endl << "The sum of these value is " << base1int + base2int << endl;
        }
};

int main() {
    Derived O;
    O.set_base1int(45);
    O.set_base2int(55567);
    O.display();
    return 0;
}

