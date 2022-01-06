#include <iostream>
#include <fstream>
using namespace std;

int main() {
    /*  string name;
    ofstream mout("tut62a.txt");
    cout << "Enter your name: ";
    cin >> name;
    mout << name;
    mout.close();  */
    ifstream min("tut62b.txt");
    string content;
    getline(min, content);
    //min >> content;
    cout << "Content: " << content;
    min.close();
    return 0;
}

