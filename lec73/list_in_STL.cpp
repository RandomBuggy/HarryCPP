/* 
 * list is by directional linked list
 * list is used for faster insertion and deletion operation
 * and vector is used for faster access
 */
#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l) {
    list<int> :: iterator it;
    for(it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> lst;
    lst.push_back(3);
    lst.push_back(9);
    lst.push_back(13);
    lst.push_back(28);
    lst.push_back(45);
    lst.push_back(78);
    lst.push_back(52);
    display(lst);

    list<int> lst2(3);
    list<int> :: iterator it2 = lst2.begin();
    *it2 = 5653;
    it2++;
    *it2 = 533533;
    it2++;
    *it2 = 12352;
    display(lst2);

    lst2.pop_back();
    display(lst2);
    lst.pop_front();
    display(lst);
    lst.remove(28);
    display(lst);
    lst.sort();
    display(lst);
    lst.merge(lst2);
    display(lst);
    display(lst2);
    lst.reverse();
    display(lst);
    cout << "list does permanent change or mutable" << endl;
    return 0;
}

