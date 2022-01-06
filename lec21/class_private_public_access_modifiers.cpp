/*
 * as structure can contain multiple data type or more specifically combine many data type into a single data type, so, why we need class
 * because structure is not safe, its member's data can be accesed or modified with the dot or member accesing operator
 *
 * another downside of structure is it can not combine a function but class can
 */

/*
 * to create a class data type use class keyword then give the class a name and for compound statements use {} carlibrasis, as any other data type declaration (like int x;) use ';' at the end
 *
 * syntax:-
 * class name {
 *  data and function and demo code;
 * };
 *
 *
 * access modifiers
 *  access modifiers are nothing but labels to tell that if any data of a particular class can be accessed by another scope or not. if yes, the label keyword is public and if no, the label keyword is private and at end of the both keyword use : must
 *
 *
 * if private then only the class's own function can use/modify the variable(value) or if public then data can be accessed from out scope from the class ( means current class type object )
 *
 * to define functions inside a class either use function prototyping inside the class's itself own scope and implement it later or directly implement the function inside class scope
 *
 * to implement a class function outside of a class first return type class_custom_data_type address resolution operator function_name (parameters/arguments if necessary) {
 * function body;
 * }
 *
 * syntax:- 
 *  void employee :: setraw(int x, int y) {
 *  x = 5;
 *  y = 6;
 *  }
 *  
 */
#include <iostream>

using namespace std;

class Employee {
    private:
        int a, b, c;
    public:
        int d, e;
    void setdata(int a1, int b1, int c1); //declaration only
    void getdata() {
        cout << "Value of a " << a << endl;
        cout << "Value of b " << b << endl;
        cout << "Value of c " << c << endl;
        cout << "Value of d " << d << endl;
        cout << "Value of e " << e << endl;
    }

};

void Employee :: setdata(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Employee harry; //object_variable initialization
    harry.d = 500;
    harry.e = 300;
    //threw error //harry.a = 543;
    harry.setdata(34, 56, 03);
    harry.getdata();
    cout << " " << endl;
    return 0;
}

