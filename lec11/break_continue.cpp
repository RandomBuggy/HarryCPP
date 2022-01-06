#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 40; i++) {
        cout << i << endl;
        if ( i == 3 ) {
            continue;
        }

        if ( i == 23 ) {
            break;
        }
    }

        int i = 0;
    while ( true ) {
        cout << i << endl;
        i++;
        if ( i == 300 ) {
            continue;
        }
        if (i == 500) {
            break;
        }
    }
    cout << " " << endl;
    return 0;
}

