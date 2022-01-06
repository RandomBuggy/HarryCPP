#include <iostream>

using namespace std;

class Y;
class C1;
class C2;


class X {
    int data;
    public:
    void setValue(int value) {
        data = value;
    }
    friend void add(X, Y);
};


class Y {
    int data;
    public:
    void setValue(int value) {
        data = value;
    }
    friend void add(X, Y);
};
class C1 {
    int val1;
    friend void exchange(C1 &, C2 &);
    public:
    void indata(int d) {
        val1 = d;
    }
    void display(void) {
        cout << val1 << endl;
    }
};


class C2 {
    int val2;
    friend void exchange(C1 &, C2 &);
    public:
    void indata(int d) {
        val2 = d;
    }
    void display(void) {
        cout << val2 << endl;
    }
};

void add(X a, Y b) {
    cout << "Sum of object a and object b " << (a.data + b.data) << endl;
}

void exchange(C1 &x, C2 &y) {
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main() {
    X p;
    Y q;
    C1 o1;
    C2 o2;
    
    p.setValue(9);
    q.setValue(7);
    add(p, q);

    o1.indata(15);
    o2.indata(45);
    cout << "o1 before swapping ";
    o1.display();
    cout << "o2 before swapping ";
    o2.display();
    exchange(o1, o2);
    cout << "o1 after swapping ";
    o1.display();
    cout << "o2 after swapping ";
    o2.display();
    return 0;
}

