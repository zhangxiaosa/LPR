#include <stdio.h>

char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;
signed j_h;
int p2_data;
int *p2 = &p2_data;

int *fn2(unsigned p1, int *p2_ptr, char p3) {
    for (p3 = 6; p3 != -7; p3--)
        j_h ^= fn1(p3, i) && 1L;
    return p2_ptr;
}

int main() {
    return 0;
}