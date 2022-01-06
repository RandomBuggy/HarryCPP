#include <iostream>

using namespace std;

class SimpleCalculator {
    private:
        int a, b;
    public:
        SimpleCalculator(void);
        ~SimpleCalculator(void) {

        }
        void Display(void);
        void set_data(int, int);
};

class ScientificCalculator {
    public:
        ScientificCalculator(void);
        ~ScientificCalculator(void) {

        }
        void display(int);
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
    public:
        HybridCalculator(int, int);
        ~HybridCalculator(void) {

        }
};

SimpleCalculator :: SimpleCalculator(void) {

}



void SimpleCalculator :: Display(void) {
    cout << "a + b is " << a + b << endl << "a - b is " << a - b << endl << "a * b is " << a * b << endl << "a / b is " << a / b << endl;
}

void SimpleCalculator :: set_data(int x, int y) {
    a = x;
    b = y;
}

ScientificCalculator :: ScientificCalculator(void) {

}

void ScientificCalculator :: display(int input) {
    if (input == 1) {
        float n1;
        cout << "Enter a number to get it's Square: ";
        cin >> n1;
        cout << "Square of " << n1 << " is " << n1 * n1 << endl;
    }
    if (input == 2) {
        float n2;
        cout << "Enter a number to get it's Square Root ";
        cin >> n2;
        cout << "The Square Root of " << n2 << " is " << sqrt(n2) << endl;
    }
    if (input == 3) {
        float R;
        cout << "Enter your circle Radius: ";
        cin >> R;
        cout << "The area of your circle is " << 3.1416 * R * R << endl;
    }
    if (input == 4) {
        cout << "Will be implemented soon" << endl;
    }
}

HybridCalculator :: HybridCalculator(int t1, int t2) {
    set_data(t1, t2);
}

int main() {
    int x, y, inp;
    cout << "Enter two number to perform +, -, *, / operation: ";
    cin >> x >> y;
    HybridCalculator H(x, y);
    H.Display();
    cout << "*****Enter Your Choice*****" << endl << endl << "1. For Square" << endl << endl << "2. Square Root" << endl << endl << "3. For Circle Area" << endl << endl << "4. Implementing Soon" << endl << endl << endl;
    cin >> inp;
    H.display(inp);
    return 0;
}

