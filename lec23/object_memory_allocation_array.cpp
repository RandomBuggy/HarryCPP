/*
 * memory allocation for objects are managed very smartly, same property-memory are shared means ones created and multiples used but different property-memory are not shared, they are different different memory location.
 *
 * so, class variables get different memory  location but class function (methods) get same memory location
 *
 */
#include <iostream>

using namespace std;

class Shop {
    int itemId[100];
    int price[100];
    int counter;
    public:
    void initCounter(void) {
        counter = 0;
    }
    void getPrice(void);
    void setPrice(void);
};

void Shop :: getPrice(void) {
    int input;
    cout << "Enter id of your product ";
    cin >> input;
    cout << "The price of your product ";
    cout << price[input];
    counter++;
}

void Shop :: setPrice(void) {
    cout << "Enter item ID ";
    cin >> itemId[counter];
    cout << "Enter price";
    cin >> price[counter];
}

int main() {
    Shop dukaan;
    dukaan.initCounter();
    while (true) {
        dukaan.setPrice();
        dukaan.getPrice();
    }
    cout << " " << endl;
    return 0;
}

