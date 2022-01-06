/*
 * for while and do-while loop concept, theiry, syntax, working flow are same as c language */
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 40; i++) {
        cout << i << endl;
    }
    int i = 1;
    while ( i <= 40 ) {
        cout << i << endl;
        i++;
    }
    do {
        cout << i << endl;
        i++;
    } while ( i <= 40 );
    cout << " " << endl;
    return 0;
}

