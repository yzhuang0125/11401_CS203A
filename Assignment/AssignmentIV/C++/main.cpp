#include <iostream>
#include <vector>
#include <set>
#include <string>
#include "hash_fn.hpp"

using namespace std;

int main() {
    int m = 10;  //editable

    vector<set<int>> tableInt(m);
    vector<set<string>> tableStr(m);

    for (int i = 0; i < 20; i++) {
        insertInt(tableInt, i * 7, m);
    }

    for (int i = 0; i < 15; i++) {
        string key = "str" + to_string(i);
        insertString(tableStr, key, m);
    }

    // 印出整數分布
    cout << "Int Hash Distribution:" << endl;
    for (int i = 0; i < m; i++) {
        cout << "[" << i << "] size = " << tableInt[i].size() << endl;
    }

    // 印出字串分布
    cout << "String Hash Distribution:" << endl;
    for (int i = 0; i < m; i++) {
        cout << "[" << i << "] size = " << tableStr[i].size() << endl;
    }

}
