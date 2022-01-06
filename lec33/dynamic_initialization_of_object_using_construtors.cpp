/*
 * dynamic initialization of object means initializing objects(using constructors) during runtime with the help of constructor overloading.
 *
 */
#include <iostream>

using namespace std;

class BankDeposit {
    int principal, years;
    float interestRate, returnValue;
    public:
        BankDeposit(void);
        BankDeposit(int, int, float);
        BankDeposit(int, int, int);
        void show(void);
};

BankDeposit :: BankDeposit(void) {
}

BankDeposit :: BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue *= (1 + interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue *= (1 + interestRate);
    }
}

void BankDeposit :: show(void) {
    cout << "The returnValue of " << principal << " after " << years << " years in " << interestRate << " interestRate is " << returnValue << "." << endl;
}



int main() {
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;
    cout << "Enter the amount of p, y and r: ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    cout << "Enter the amount of p, y, R: ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}

