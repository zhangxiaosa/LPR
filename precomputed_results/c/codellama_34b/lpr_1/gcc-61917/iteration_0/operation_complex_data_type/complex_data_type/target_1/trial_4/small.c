
#include <stdio.h>

#define ARRAY_SIZE 5
#define ELEMENT_SIZE 8

int fn2(int p1, int p2) {
    return p1 - p2;
}

int main() {
    int i, j;
    for (i = 0; i < ARRAY_SIZE; i++) {
        for (j = 0; j < ELEMENT_SIZE; j++) {
            int p1 = fn2(i * j, p1);
            m[i][j] = p1;
        }
    }
    return 0;
}
