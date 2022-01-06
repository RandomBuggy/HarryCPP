#include <iostream>

using namespace std;

template <class T>

void swapp(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>

T2 Avg(T1 a, T2 b) {
    T2 avg = (a + b) / 2;
    return avg;
}

int main() {
    int x = 5;
    int y = 7;
    swapp(x, y);
    cout << x << endl << y << endl;
    
    float A = Avg(x, y);
    cout << A << endl;
    return 0;
}

