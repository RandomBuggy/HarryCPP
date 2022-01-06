/*
 * virtual base class is needed when hybrid inheritance occurs and to prevent member duplication and ambiguity
 *
 *                  class A
 *                      |
 *       |--------------|---------------|
 *       |                              |
 *       |                              |
 *   class B                        class C
 *       |                              |
 *       |                              |
 *       |                              |
 *       |--------------|---------------|
 *                      |
 *                      |
 *                  class D
 *
 *
 *
 * syntax:- 
 * like 
 * class B : virtual public A 
 * class C : virtual public A
 *
 * if a data member named x in A, after inherit x will also available in B, C
 *
 * but 
 *
 * class D : public B, public C
 *
 * in above case because of virtual base class A, x will be copied once and resolve ambiguity and duplication
 *
 */

#include <iostream>

using namespace std;

int main() {
    cout << " " << endl;
    return 0;
}

