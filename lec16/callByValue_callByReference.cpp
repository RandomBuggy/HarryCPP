#include <iostream>

using namespace std;

int sum(int x, int y) {
    return x + y;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference with reference variable and return reference implementation 
int & swapRefVar(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    return x;
}

int main() {
    int a = 5, b = 4;
    cout << "Sum is: " << sum(a, b) << endl;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    swapPointer(&a, &b);
    cout << a << " " << b << endl;
    swapRefVar(a, b);
    cout << a << " " << b << endl;
    swapRefVar(a, b) = 4535;
    cout << a << " " << b << endl;
    cout << " " << endl;
    return 0;
}

