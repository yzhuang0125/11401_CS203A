#ifndef HASH_FN_HPP
#define HASH_FN_HPP

#include <string>
#include <vector>
#include <set>

using namespace std;

// hash functions
int hashInt(int key, int m);
int hashString(const string& s, int m);

// insertion into hash table
void insertInt(vector<set<int>>& table, int key, int m);
void insertString(vector<set<string>>& table, const string& key, int m);

#endif
