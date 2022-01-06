/*
 *
 * if you want to make friend-function of a class which is inside another class. then syntax are similar to friend-function syntax but you have to use scope resolution operator to help the compiler to find that function
 *
 * but there will be still error, to solve this use forward declaration(class prototype) and use second method(using scope resolution operator) of declaring and defining a member-function
 *
 * if there are thousands of functions to make friend-function then use friend-class concept
 *
 * syntax:- friend class class_name;
 *
 */
#include <iostream>

using namespace std;




class Complex;

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }
        int sumRealComplex(Complex, Complex);
};



class Complex {
    private:
        int a, b;
        friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
        friend class Calculator;
    public:
        void setNumber(int n1, int n2);
        void getNumber(void);
} x, y;

void Complex :: setNumber(int n1, int n2) {
    a = n1;
    b = n2;
}

void Complex :: getNumber(void) {
    cout << "The generated Complex number is " << a << " +" << " " << b << "i" << "." << endl;
}


int Calculator :: sumRealComplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int main() {
    x.setNumber(4, 5);
    x.getNumber();
    y.setNumber(9, 7);
    y.getNumber();
    Calculator o;
    int reslt = o.add(2, 3);
    cout << reslt << endl;
    int cplxSum = o.sumRealComplex(x, y);
    cout << cplxSum << endl;
    cout << " " << endl;
    return 0;
}

