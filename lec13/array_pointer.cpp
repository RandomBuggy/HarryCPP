#include <iostream>

using namespace std;

int main() {
    int marks[4] = {33, 34, 56, 45};
    int mathMarks[4];

    mathMarks[0] = 5445;
    mathMarks[1] = 2233;
    mathMarks[2] = 9765;
    mathMarks[3] = 3562;

    cout << "These are Math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    cout << "Changing mathMarks[2] value" << endl;
    mathMarks[2] = 5454;
    cout << mathMarks[2] << endl;

    cout << "These are marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << "Using loop concept" << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Printing value of marks at " << i << " is " << marks[i] << endl;
    }
    cout << "Using pointer arithmatic concept" << endl;

    int* p = marks;
    
    cout << *p << endl;
    cout << *(p++) << endl;
    cout << *(p++) << endl;
    cout << *(p++) << endl;
    cout << " " << endl;
    return 0;
}

