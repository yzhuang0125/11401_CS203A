#include "hash_fn.hpp"


int hashInt(int key, int m) {
    return (key % m + m) % m; 
}

int hashString(const string& s, int m) {
    long long h = 0;
    for (char c : s) {
        h = (h * 31 + c) % m;
    }
    return h;
}

void insertInt(vector<set<int>>& table, int key, int m) {
    int idx = hashInt(key, m);
    table[idx].insert(key);
}

void insertString(vector<set<string>>& table, const string& key, int m) {
    int idx = hashString(key, m);
    table[idx].insert(key);
}
