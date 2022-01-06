/*
 * vector is a data structure of resizable array
 */
#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v) {
    for(int i = 0; i < v.size(); i++) {
        //cout<< v[i] << " ";
        cout<< v.at(i) << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vect;
    int element, size;
    cout << "Enter your vector size: ";
    cin >> size;
   for(int i = 0; i < size; i++) {
        cout << "Enter Your Element: ";
        cin >> element;
        vect.push_back(element);
    }
    display(vect);
    vect.pop_back();
    display(vect);
    vector<int> :: iterator iterat = vect.begin();
    vect.insert(iterat + 3, 25, 24423);
    display(vect);
    
    vector<char> vect2(7, 'r');
    display(vect2);
    vector<float> vect3(3);
    vect3.push_back(7.9);
    vect3.push_back(8.5);
    display(vect3);
    vector<double> vect4(5, 7.9);
    display(vect4);
    return 0;
}

