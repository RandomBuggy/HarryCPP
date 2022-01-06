#include <iostream>

using namespace std;

class Base1 {
    private:
        int data1;
    public:
        Base1(int i) {
            data1 = i;
            cout << "Base1 class constructor invoked" << endl;
        }

        void printData1(void) {
            cout << "The value of data1 is " << data1 << endl;
        }
};

class Base2 {
    private:
        int data2;
    public:
        Base2(int i) {
            data2 = i;
            cout << "Base2 class constructor invoked" << endl;
        }

        void printData2(void) {
            cout << "The value of data2 is " << data2 << endl;
        }
};

class Derived : public Base1, public Base2 {
    private:
        int derive1, derive2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b) {
            derive1 = c;
            derive2 = d;
            cout << "Derived class constructor invoked" << endl;
        }

        void printData(void) {
            cout << "The value of derive1 and derive2 is " << derive1 << " and " << derive2 << endl;
        }
};


int main() {
    Derived obj(1, 2, 3, 4);
    obj.printData1();
    obj.printData2();
    obj.printData();
    return 0;
}

