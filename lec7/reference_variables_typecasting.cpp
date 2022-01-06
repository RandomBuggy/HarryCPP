#include <iostream>
/* scope resolution operator is used to use global value of same name (variables) to escalate local precedence
 */
using namespace std;

int c = 45;

int main() {
    int a, b, c;
    cout << "Enter the value of a, b: ";
    cin >> a >> b;
    c = a + b;
    cout << "The sum is: " << c << endl;
    cout << "The value of global c is " << ::c << endl;
    float d = 34.3f;
    long double e = 34.3l;
    cout << "The value of d is " << d << endl << "The value of e is " << e << endl;
    /* in c++ compiler by default assume floating point numbers as double, to treat double forcefully as float use f concatenate with the number. like 45.5f and also l for long double. like 45.5l */
    cout << "Size of 43.5 " << sizeof(34.5) << endl;
    cout << "Size of 43.5 " << sizeof(34.5F) << endl;
    cout << "Size of 43.5 " << sizeof(34.5f) << endl;
    cout << "Size of 43.5 " << sizeof(34.5L) << endl;
    cout << "Size of 43.5 " << sizeof(34.5l) << endl;
    /* reference variable is a concept by which we can point multiple variable to the same memory address and can access same value , but with different variable names.
     *
     *
     * to implement this concept use address of operator. syntax:-
     *      datatype &ref_var_name = var_name;
     * 
     * like:- float a = 45.5;
     *        float &y = a;
     */
    float x = 455.9;
    float &y = x;
    cout << x << endl;
    cout << y << endl;
    /* typecasting *
     * two valid syntax :- (int)a , int(a)
     */
    float g = 0.64646464;
    int h = 5;
    cout << (g + h) << endl;
    cout << (int(g) + h) << endl;
    cout << ((int)g + h) << endl;
    return 0;
}
