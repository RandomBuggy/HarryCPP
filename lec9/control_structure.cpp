/* there are three types of control structures in c++.
 * they are:- 
 *      1.sequential
 *      2.selectional
 *      3. loop
 *
 * first one is implemented as we write code normally.
 * second one can be implemented by using if-else and switch-case
 *
 * third one will be implemented by using loops
 */
#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter Tour Age: ";
    cin >> age;
    if (age > 0 && age < 18) {
        cout << "Sorry, You can not come to the party!!!" << endl;
    }
    else if ( age == 18 ) {
        cout << "You are a kid and you will get kid pass to the party" << endl;
    }
    else if ( age <= 0 ) {
        cout << "You are not yet born !!!!!!!" << endl;
    }
    else {
        cout << "You can come to the party" << endl;
    }
    /* selectional structure using switch-case */

    switch(age) {
        case 22: {
            cout << "Your age is " << age << endl;
            break;
                 }
        case 18: {
                     cout << "Your age is " << age << endl;
                     break;
                 }
        case 2: {
                    cout << "Your age is " << age << endl;
                    break;
                }
        default: {
                    cout << "No matches" << endl;
                    break;
                }
                }
    return 0;
}

