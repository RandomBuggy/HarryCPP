#include <iostream>

using namespace std;

template <class T1=int, class T2=char, class T3=float>

class Class {
    private:
        T1 a;
        T2 b;
        T3 c;
    public:
        Class(T1 a, T2 b, T3 c) {
            this -> a = a;
            this -> b = b;
            this -> c = c;
        }

        void display(void) {
            cout << this -> a
                << endl
                << this -> b
                << endl
                << this -> c
                << endl;
        }
};

int main() {
    Class<> O(9, 'p', 0.999);
    O.display();
    cout << endl;
    Class<int, int, int> o(1, 2, 3);
    o.display();
    return 0;
}

