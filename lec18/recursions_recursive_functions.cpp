#include <iostream>

using namespace std;

int factor(int);

int fib(int);

int main() {
    int num;
    cout << "Enter the value of num";
    cin >> num;
    cout << "Factorial is " << factor(num) << endl;
    cout << " " << endl;
    return 0;
}

int factor(int x) {
    if ( x == 0 || x == 1 ) {
        return 1;
    }

    return x * factor( x - 1 );
}

int fib(int p) {
    if ( p < 2 ) {
        return 1;
    }
    return fib(p - 2) + fib(p - 1);
}
