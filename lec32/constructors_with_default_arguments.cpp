/*
 * default argument is same concept as function_default_argument. instead of constructor overloading, default-argument concept can be used
 *
 */
#include <iostream>

using namespace std;

class Simple {
    int data1, data2;
    public:
        Simple(int, int);
        void prData(void);
};

Simple :: Simple(int a, int b = 7) {
    data1 = a;
    data2 = b;
}

void Simple :: prData(void) {
    cout << "The value of data1 and data2 is " << data1 << ", " << data2 << endl;
}

int main() {
    Simple a(1, 4);
    Simple b = Simple(3);
    a.prData();
    b.prData();
    return 0;
}

