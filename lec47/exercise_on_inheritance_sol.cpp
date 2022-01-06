#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator {
    private:
        int a, b;
    public:
        void setDataSimple(void) {
            cout << "Enter the value of a, b: ";
            cin >> a >> b;
        }

        void performOperationsSimple(void) {
            cout << "The value of a + b is " << a + b << endl;
            cout << "The value of a - b is " << a - b << endl;
            cout << "The value of a * b is " << a * b << endl;
            cout << "The value of a / b is " << a / b << endl;
        }
};

class ScientificCalculator {
    private:
        int a, b;
    public:
        void setDataScientific(void) {
            cout << "Enter the value of a and b: ";
            cin >> a >> b;
        }

        void performOperationsScientific(void) {
            cout << "The value of cos(a): " << cos(a) << endl;
            cout << "The value of sin(a): " << sin(a) << endl;
            cout << "The value of tan(a): " << tan(a) << endl;
            cout << "The value of exp(a): " << exp(a) << endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {

};

int main() {
    HybridCalculator Hc;
    Hc.setDataSimple();
    Hc.performOperationsSimple();
    Hc.setDataScientific();
    Hc.performOperationsScientific();
    return 0;
}

