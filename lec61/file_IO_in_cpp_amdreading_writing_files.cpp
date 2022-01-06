
/*
 * some useful classes to interact with files in c++
 *      1.fstreambase --> base class
 *      2.ifstream --> derived from fstreambase 
 *      3.ofstream --> derived from fstreambase
 * to interact with file in c++ you must open it. primarily two way to do it
 *      1. uding constructor of the class
 *      2. using open() method of the class 
 *
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string str1 = "Harry Bhai";
    string str2;
    //opening and writing to a file
    ofstream out("sample61a.txt");
    out << str1;
    out.close(); //lec62
    //opening and reading from a file
    ifstream in("sample61b.txt");
    in >> str2;
    //to iteratate in newline use getline(ifstream obj, output var(may be in string type)) function
    getline(in, str2);
    cout << str2;
    in.close(); //lec62
    return 0;
}

