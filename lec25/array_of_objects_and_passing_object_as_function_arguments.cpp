/*
 * object-array are the same concept as normal-data-type array. just write class-data-type as a keyword and initialize a array with a valid name and valid syntax. and as normal array we can also iteratate as normal-data-type array
 * 
 *
 * passing objects as arguments
 *
 * just normal data-type syntax. like type data-type-keyword(class-name) valid-var-name(object-name) and the class-name could be the same class or different class and it will definitely work as normal arguments.
 */

#include <iostream>

using namespace std;

class Employee {
    int id;
    int salary;
    public:
    void setD(void) {
        cout << "Enter The ID and Salary of Employee: ";
        cin >> id >> salary;
    }

    void getD(void) {
        cout << "The employee id is " << id << "and salary is " << salary << endl;
    }
};

class Complex {
    int a;
    int b;
    public:
        void setData(int v1, int v2); 
        void setDataBySum(Complex o1, Complex o2);
        void printNumber(void);
};

void Complex :: setData(int v1, int v2) {
    a = v1;
    b = v2;
}

void Complex :: setDataBySum(Complex o1, Complex o2) {
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}

void Complex :: printNumber(void) {
    cout << "The complex Number is " << a << "+" << b << "i" << endl;
}

int main() {
    cout << " " << endl;
    Employee sata, pata, data;
    sata.setD();
    sata.getD();
    pata.setD();
    pata.getD();
    data.setD();
    data.getD();
    Employee fb[4];
    for (int i = 0; i < 4; i++) {
        fb[i].setD();
        fb[i].getD();
    }

    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();
    c2.setData(3, 4);
    c2.printNumber();
    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}

