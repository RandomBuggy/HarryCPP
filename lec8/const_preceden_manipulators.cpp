#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    /* use const key word before variable declaration to make a variable immutable */
    const int a = 10;
    //a = 21;
    /* throw error */


    /* manipulators helps to format string display like endl */


    /* another manipulators is inside iomanip header file which is setw. setw is used to print nth space left to right. so, it can be also used right alignment of string. Actually, manipulators are used with IO stream */
    cout << "value" << ":" << setw(4) << 5 << endl;

    /* operator precedence */
    /* if precedence same, see associavity */

    /* for reference see cppreference.com */
    
    return 0;
}
