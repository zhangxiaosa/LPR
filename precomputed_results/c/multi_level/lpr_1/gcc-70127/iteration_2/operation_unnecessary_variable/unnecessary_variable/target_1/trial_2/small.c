#include <stdio.h>

typedef struct {
    int ab;
    signed q : 22;
} p;

p v[1];
p w = {0x12345678, 999};

int main() {
    unsigned checksum = w.q;
    printf("checksum = %X\n", checksum);
    return 0;
}