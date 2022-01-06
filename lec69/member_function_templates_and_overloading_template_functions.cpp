#include <iostream>

using namespace std;

template <class T>

class Harry {
    private:
        T a;
    public:
        Harry(T a) {
            this -> a = a;
        }

        void display(void);
};

template <class T>

void Harry<T> :: display(void) {
    cout << a << endl;
}

/* if a function is overloaded with two different ways like template and normal implementation, then the exact match of datatypes and parameters takes highest priority and solves the ambiguity but if not matched then imolemented using template */

void func(int a) {
    cout << "I am func() " << a << endl;
}

template <class T>

void func(T a) {
    cout << "I am templatized func() " << a << endl;
}

int main() {
    Harry<char> h('y');
    h.display();
    Harry<int> H(9);
    H.display();

    func(9); //exact match
    func('w');//no exact match
    return 0;
}

