/*
 * static member (variable) are used in a shared memory space so multiole object can access or pass its value 
 * static-storage-class member are by default initialized with 0 and to declare, a static member declare it inside class and declare it outside class with scope resolution operator both time
 * static variable has scope within class and lifetime until programme terminates
 * if you want to also initialize value of static variable then to avoid syntax error, initialize it with the scope-resolution-line
 * static methods(functions) can only use/access static members
 * use this "static" keyword before declaration of static function only within class scope
 * static function can be called without any object reference (dot operator) only by using scope resolution operator with the class
 */
#include <iostream>

using namespace std;

class Employee {
    int Id;
    static int count;
    public:
        void setData(void);
        void getData(void);
        static void getCount(void);
};

void Employee :: setData(void) {
    cout << "Enter the employee ID: ";
    cin >> Id;
    count++;
}

void Employee :: getData(void) {
    cout << "The ID of this employee is " << Id << "Total count is " << count << endl;
}

void Employee :: getCount(void) {
    cout << "The value of count is " << count << endl;
}

int Employee :: count;

int main() {
    Employee x, y, z;
    x.setData();
    x.getData();
    Employee :: getCount();
    y.setData();
    y.getData();
    Employee :: getCount();
    z.setData();
    z.getData();
    Employee :: getCount();
    cout << " " << endl;
    return 0;
}

