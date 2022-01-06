#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream out;
    out.open("tut63.txt");
    out << "this is \n";
    out << "a file\n";
    out << "written by using \n";
    out << "c++";
    out.close();

    ifstream in;
    string s;
    in.open("tut63.txt");
    while(in.eof() == 0) {
        getline(in, s);
        cout << s << endl;
    }
    in.close();
    return 0;
}

