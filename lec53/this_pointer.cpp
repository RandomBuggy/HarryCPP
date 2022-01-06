/*
 * 'this' is a keyword and also a pointer which points to a object. this replace that object-pointer which object call methods of something like xyz class
 *
 * this keyword is useful to prevent local variable presedence over class variable(data member) instead of writing `x = x`, we can ppoint to the xyz object's x named data member like `this -> x = x` this
 *
 * and also to return a object by a method like this `xyz & getdata(void) {cout << " " << endl; return (*this)} xyz* ptr = obj.getdata(); ptr -> getdata(); `
 */
#include <iostream>

using namespace std;

class A {
    private:
        int a;
    public:
        void setData(int a) {
            this -> a = a;
        }
        A& setD(int a) {
            this -> a = a;
            return (*this);
            /* reurns A datatype's object which rounds the same object */
        }
        void getData(void) {
            cout << "The value of a is " << a << endl;
        }
};

int main() {
    A a;
    a.setData(4);
    a.getData();
    A b;
    /*   for 'this' keyword b.setD() as a whole a object because setD returns a A datatype*/
    b.setD(9).getData();
    b.getData();
    return 0;
}

