#ifndef HASH_FN_H
#define HASH_FN_H

#define MAX_STRING_LEN 100

/* linked list node for int */
typedef struct IntNode {
    int key;
    struct IntNode* next;
} IntNode;

typedef struct StringNode {
    char key[MAX_STRING_LEN];
    struct StringNode* next;
} StringNode;

int hashInt(int key, int m);
int hashString(const char* s, int m);

void insertInt(IntNode* table[], int key, int m);
void insertString(StringNode* table[], const char* key, int m);

#endif

