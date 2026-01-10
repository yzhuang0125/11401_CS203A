#include "hash_fn.h"
#include <stdlib.h>
#include <string.h>


int hashInt(int key, int m) {
    int h = key % m;
    return (h < 0) ? h + m : h;
}

int hashString(const char* s, int m) {
    long long h = 0;
    while (*s) {
        h = (h * 31 + *s) % m;
        s++;
    }
    return (int)h;
}

void insertInt(IntNode* table[], int key, int m) {
    int idx = hashInt(key, m);

    IntNode* node = (IntNode*)malloc(sizeof(IntNode));
    node -> key = key;
    node -> next = table[idx];
    table[idx] = node;
}

void insertString(StringNode* table[], const char* key, int m) {
    int idx = hashString(key, m);

    StringNode* node = (StringNode*)malloc(sizeof(StringNode));
    strncpy(node -> key, key, MAX_STRING_LEN);
    node->key[MAX_STRING_LEN - 1] = '\0';
    node->next = table[idx];
    table[idx] = node;
}
