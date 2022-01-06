/*
 * single inheritance
 * syntax of inheritance
 * class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
 *
 * visibility mode defines that which characteristics should base-class-public-member will expose
 *
 * and visibility mode can only be public or private (private is by default)
 *
 * if public is set:- base-class-public-member/methods ---> derived-class-public-member/methods
 *
 * if private is set:- base-class-public-member/methods ---> derived-class-private-member/methods
 *
 * private-member-base-class can never be inherited.
 *
 * when a derived class is created c++ compiler automatically calls base class constructor.so, solution a default constructor is very important
 *
 */

#include <iostream>

using namespace std;

class Employee {
    private:
        float salary;
    public:
        int id;
        Employee(int n) {
            id = n;
            salary = 0;
        }
        Employee(void) {

        }
        void display(void) {
            cout << id << endl << salary << endl;
        }
};

class Programmer : public Employee {
    private:
        int languageCode;
    public:
        Programmer(int q) {
            languageCode = q;
            id = 100;
        }
        void getData(void) {
            cout << languageCode << endl << id << endl;
        }
};

int main() {
    Employee O1(1), O2(2), O3(3);
    O1.display();
    O2.display();
    O3.display();
    Programmer o(5);
    o.getData();
    return 0;
}

