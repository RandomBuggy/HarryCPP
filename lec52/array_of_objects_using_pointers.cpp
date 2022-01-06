#include <iostream>

using namespace std;

class Shop {
    private:
        int itemId;
        float price;
    public:
        void setData(int a, float b) {
            itemId = a;
            price = b;
        }

        void getData(void) {
            cout << "The code of itemId is " << itemId << endl << "The code of price is " << price << endl;
        }
};

int main() {
    int size, p, i;
    float q;
    cout << "Enter Shop number: ";
    cin >> size;
    Shop* ptr = new Shop[size];
    Shop* tmp = ptr;
    for (i=0; i < size; i++) {
        cout << "\t\tShop Number: " << (i+1) << endl << "Enter itemId and price: ";
        cin >> p >> q;
        ptr -> setData(p, q);
        ptr -> getData();
        ptr++;
    }
    cout << "\t\tReport" << endl << endl;
    for(i = 0; i < size; i++) {
        cout << "\t\tShop number " << (i+1) << endl;
        tmp -> getData();
        tmp++;
    }
    delete[] ptr;
    delete tmp;
    return 0;
}

