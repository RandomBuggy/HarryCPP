#include <iostream>

using namespace std;

typedef struct employee {
    int eId;
    char favChar;
    float salary;
}ep;

union money {
    int rice;
    char car;
    float pounds;
};

int main() {
    ep mj;
    mj.eId = 1;
    mj.favChar = 'j';
    mj.salary = 1200000;

    cout << mj.eId << endl;
    cout << mj.favChar << endl;
    cout << mj.salary << endl;

    union money m1;
    m1.rice = 10;
    cout << m1.rice << endl;
    m1.car = 'c';
    cout << "garbage value " << m1.rice << endl;
    cout << m1.car << endl;

    m1.pounds = 34.006;
    cout << m1.pounds << endl;

    /* in c++ structure and union data types are as same as c language */

    /*  but enum are different complex data type 
     *  it gives to list of string each element a number (starting from 0) background */

    enum meal {
        breakfast,
        launch,
        dinner
    };
    
    meal ml = dinner;
    cout << ml << endl;
    cout << " " << endl;
    return 0;
}

