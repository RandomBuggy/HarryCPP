#include <iostream>

using namespace std;

class Complex {
    private:
        int real, imagenary;
    public:
        void getData(void) {
            cout << "The real part of this complex number is " << real << endl;
            cout << "The imagenary part of this complex number is " << imagenary << endl;
        }
        void setData(int a, int b) {
            real = a;
            imagenary = b;
        }
};

int main() {
    Complex obj;
    obj.setData(7, 9);
    obj.getData();
    Complex* p = NULL;
    p = &obj;
    cout << p << endl;
    Complex* ptr = new Complex;
    ptr->setData(6, 3);
    (*ptr).getData();
    Complex* P = new Complex[10];
    delete ptr;
    delete[] P;
    delete p;
    return 0;
}

