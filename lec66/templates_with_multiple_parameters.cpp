#include <iostream>

using namespace std;

template <class T1, class T2>
class myClass {
    private:
        T1 data1;
        T2 data2;
    public:
        myClass(T1 data1, T2 data2) {
            this -> data1 = data1;
            this -> data2 = data2;
        }

        void display(void) {
            cout << this -> data1 << " " << this -> data2 << endl;
        }
};

int main() {
    myClass <char, char> O('y', 'z');
    O.display();
    return 0;
}

