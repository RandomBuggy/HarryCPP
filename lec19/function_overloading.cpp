/*
 * function overloading means multiple function ( definition-declaration-calling ) with same name
 * the c++ compiler will automatically choose which function is to use verifying the arguments or return type 
 */
#include <iostream>

using namespace std;

int sum(int, int);

int sum(int, int, int);

float volume(float, float);

float volume(float);

int main() {
    int x, y, z;
    float p, q, r;

    cout << "Enter Three Integer Number: ";
    cin >> x >> y >> z;
    cout << "Enter Three Floating Point Number: ";
    cin >> p >> q >> r;
    cout << "Sum : " << sum(x, y) << endl;
    cout << "Overloaded Sum : " << sum(x, y, z) << endl;
    cout << "Volume of a cylinder: " << volume(p, q) << endl;
    cout << "Volume of a cube: " << volume(r) << endl;
    cout << " " << endl;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

float volume(float r, float h) {
    return (3.14 * r * r * h);
}

float volume(float l) {
    return (l * l * l);
}
