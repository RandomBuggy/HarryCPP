#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main() {
    int array[] = {7, 446, 553 , 13, 95, 53, 571, 9853, 327, 63, 3, 9};

    sort(array, array + 12);
    for(int i = 0; i < 12; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    sort(array, array + 12, greater<int>() /* used from function object or functor header file from STL */);
    for(int i = 0; i < 12; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

