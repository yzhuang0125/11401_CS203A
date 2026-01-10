#include <stdio.h>
#include <stdlib.h>
#include "hash_fn.h"

int main() {
    int m = 10;  

    IntNode* tableInt[10] = { 0 };
    StringNode* tableStr[10] = { 0 };

    for (int i = 0; i < 20; i++) {
        insertInt(tableInt, i * 7, m);
    }

    for (int i = 0; i < 15; i++) {
        char key[20];
        sprintf(key, "str%d", i);
        insertString(tableStr, key, m);
    }

    printf("Int Hash Distribution:\n");
    for (int i = 0; i < m; i++) {
        int count = 0;
        IntNode* cur = tableInt[i];
        while (cur) {
            count++;
            cur = cur->next;
        }
        printf("[%d] size = %d\n", i, count);
    }

    printf("String Hash Distribution:\n");
    for (int i = 0; i < m; i++) {
        int count = 0;
        StringNode* cur = tableStr[i];
        while (cur) {
            count++;
            cur = cur->next;
        }
        printf("[%d] size = %d\n", i, count);
    }

    return 0;
}
