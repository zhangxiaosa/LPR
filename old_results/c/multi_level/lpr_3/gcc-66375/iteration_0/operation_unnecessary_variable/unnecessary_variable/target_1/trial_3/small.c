#include <stdio.h>

char fn2(char p1, int p2) {
    return p1;
}

short fn3(short p1, short p2) {
    return p2;
}

unsigned p;
unsigned u;
unsigned v_value;

int main() {
    int i;
    int d = 2;
    for (; u < 51; ++u) {
        d = fn2(v_value = fn3(4, d), 3);
    }
    p = v_value;
    printf("checksum = %x\n", p);
     return 0;
}