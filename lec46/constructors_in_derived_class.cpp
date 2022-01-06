/*
 * we can use constructors in derived class also
 *
 * if base class has already a constructor then no need to create another in derived class
 *
 * but the constructor has arguments in the base class, the derived need to pass the value to the base class constructor
 *
 * and if both have constructor then the base one executed first
 *
 * in multiple inheritance base class constructors are constructed in the order of class appearance
 *
 * in multiple inheritance, constructor are executed in order of inheritance
 *
 * c++ supports a special syntax for passing arguments to the base class/classes through the derived class constructor
 *
 * the constructor of the derived class received all the arguments at once and pass needed arguments to the respective base class/classes
 *
 * special syntax:- 
 *      class ConsX(arg1, arg2, arg3, etc) : class constY(arg1), class constZ(arg2) {
 *      class constX body
 *      arg3
 *      }
 *
 *
 * the constructor of virtual base class are invoked before a non virtual base class
 *
 * if there are multiple base class, the constructor are invoked in order they declared
 *
 * then non-virtual class constructor are invoked then derived class constructor
 */
#include <iostream>

using namespace std;

int main() {
    return 0;
}

