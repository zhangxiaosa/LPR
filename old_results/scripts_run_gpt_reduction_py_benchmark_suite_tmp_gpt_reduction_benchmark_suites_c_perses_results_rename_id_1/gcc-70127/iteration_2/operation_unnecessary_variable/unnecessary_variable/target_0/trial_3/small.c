#include <stdio.h>

typedef struct {
    int ab;
    signed q : 22;
} p;

p v[1];
p w = {0x12345678, 999};

int main() {
    v[0] = w;
    unsigned checksum = v[0].q;
    printf("checksum = %X\n", checksum);
    return 0;
}