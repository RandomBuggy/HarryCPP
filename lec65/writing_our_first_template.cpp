#include <iostream>

using namespace std;

template <class T>

class Vector {
    public:
        T* ptr;
        int size;
        Vector(int size) {
            this -> size = size;
            ptr = new T[size];
        }

        T dotProduct(Vector &v) {
            T d = 0;
            for(int i = 0; i < size; i++) {
                d += this -> ptr[i] * v.ptr[i];
            }
            return d;
        }
};

int main() {
    Vector <float> O1(5);
    Vector <float> O2(5);
    O1.ptr[0] = 1;
    O1.ptr[1] = 2;
    O1.ptr[2] = 3;
    O1.ptr[3] = 4;
    O1.ptr[4] = 5;
    O2.ptr[0] = 1;
    O2.ptr[1] = 2;
    O2.ptr[2] = 3;
    O2.ptr[3] = 4;
    O2.ptr[4] = 5;
    float sum = O1.dotProduct(O2);
    cout << sum << endl;
    return 0;
}

