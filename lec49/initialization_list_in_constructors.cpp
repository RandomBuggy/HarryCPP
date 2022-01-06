/*
 * initialization list in constructor 
 *
 * syntax:-
 * constructor(argument-list) : initialization-list {
 *      assignment + other code
 * }
 *
 */
#include <iostream>

using namespace std;

class Test {
    private:
        int a, b;
    public:
        //Test(int i, int j) : a(i), b(j) {
        //Test(int i, int j) : a(i), b(i + j) {
        //Test(int i, int j) : a(2 * i), b(j) {
        //Test(int i, int j) : a(i), b(a + j) {
        //Test(int i, int j) : b(j), a(b + i) { -> this will create problems because a will initialize first
        Test(int i, int j) : a(i), b(j) {
            cout << "Constructor invoked" << endl;
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
        }
};

int main() {
    Test t = Test(7, 5);
    return 0;
}

