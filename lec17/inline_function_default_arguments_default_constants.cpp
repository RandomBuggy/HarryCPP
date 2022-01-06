#include <iostream>

using namespace std;

inline int product(int x, int y) {
    return x * y;
}


float moneyReceived(int currentMoney,const float factor = 1.04/*constant  default argument value */) {
    return currentMoney * factor;
}

int main() {
    int a, b;
    cout << "Enter The Value of a and b";
    cin >> a >> b;
    cout << "Inline functions are expanded during compilation by the compiler to skip function calling process for simple and 1 or 2 line function " << endl;

    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    cout << "Product is " << product(a, b) << endl;
    int mon = 100000;
    cout << "if you have " << mon << " then you will get " << moneyReceived(mon) << endl;
    cout << "For VIP: if you have " << mon << " then you will get" << " " << moneyReceived(mon, 1.1) << endl;
    cout << " " << endl;
    return 0;
}

