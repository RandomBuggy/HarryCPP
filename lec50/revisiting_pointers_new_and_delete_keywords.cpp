#include <iostream>

using namespace std;

class Pointer {
    private:
        int a;
        int* ptr;
    public:
        Pointer(int i) : a(i) {
            ptr = &a;
            cout << "Value of ptr is " << ptr << endl;
            cout << "Value of a is " << a << endl;
            cout << "Value of a(using pointers) is " << *(ptr) << endl;
        }
};

int main() {
    Pointer p(664445);
    int* pt = new int(9);
    cout << "Value at dynamic memory p: " << *pt << endl;
    delete pt;

    char* ptr = new char[9];
    *ptr = 'M';
    ptr[1] = 'O';
    ptr[2] = 'F';
    ptr[3] = 'A';
    ptr[4] = 'Z';
    ptr[5] = 'Z';
    *(ptr + 6) = 'A';
    *(ptr + 7) = 'L';
    *(ptr + 8) = '\0';
    cout << ptr << endl;
    delete[] ptr;
    return 0;
}

