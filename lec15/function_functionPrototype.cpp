#include <iostream>

using namespace std;

int sum(int, int); 
void g();

int main() {
    int num1, num2;
    cout << "Enter two number to add $ ";
    cin >> num1 >> num2;
    cout << "The sum is " << sum(num1, num2) << endl;
    g();
    cout << " " << endl;
    return 0;
}

int sum(int a, int b) {
    int c = a + b;
    return c;
}

void g() {
    cout << "Hello, Good Morning" << endl;
}

