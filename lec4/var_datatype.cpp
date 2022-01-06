#include <iostream>

using namespace std;

/* mostly used datatypes in c++ are:
 *
 * 1. int
 * 2. float
 * 3. char
 * 4. double
 * 5. boolean
 *
 * so, syntax for declaring and initializing a variable:-
 *
 * data_type valid_var_name = value (valid);
 *
 * example:- char c = 'z';
 *
 * now, lets discuss scope:
 *
 * scope means existance area of a variable . like during the existance in the whole programme or inside a block ( compound statement ) of code etc.
 *
 * scope of variable is firstly two types. they are:-
 *
 *      1. local variable
 *      2. global variable
 *
 * note: both global and local variable can be exist with same name because local variable take precidence over global variable.
 *
 * so, now data type means what type of data is going to be hold by a variable
 *
 * there are 3 catagory of data type in c++.
 *      1. built-in
 *      2. user defined
 *      3. derived
 *
 *
 *      built-in data types are 5. they are int, char, float, double, bool
 *
 *
 *      user defined datatypes are 3. they are struct, union, enum
 *
 *      derived data types are array, function, pointer.
 *
 *
 */
int glo = 6;


void sum() {
    int f;
    cout << glo;
}
int main(void) {
    int a = 5;
    char b = 'b';
    float c = 1.5;
    bool d = true;
    cout << "The value of a is: " << a << "\nThe value of b is: " << b << "\n The val of c is: "<< c << "\nThe value of d is: " << d;
    cout << glo;
    glo = 9;
    cout << glo;
    sum();
    // it will throw error:  cout << f;
    return 0;
}
