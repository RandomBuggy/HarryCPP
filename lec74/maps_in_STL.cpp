/*
 * map is a associative array
 */
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> marksMap;
    marksMap["xyz"] = 5645;
    marksMap["yfy"] = 87647;
    marksMap["iutg"] = 97753;
    marksMap.insert({{"jgfufyfyfyf", 96653}, {"phgfryf", 875453}});
    map<string, int> :: iterator itr;
    for(itr = marksMap.begin(); itr != marksMap.end(); itr++) {
        cout<< (*itr).first << " " << (*itr).second << endl;
    }
    cout << "the map size is " << marksMap.size() << endl
        << "the map max size is " << marksMap.max_size() << endl
        << "the empty() method's return value is " << marksMap.empty() << endl;
    return 0;
}

