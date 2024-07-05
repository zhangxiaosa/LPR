#include <stdio.h>

int fn2(int p1) {
    return p1;
}

unsigned int v_value;
unsigned int u;

int main() {
    int d = 2;

    for (; u < 51; ++u) {
        d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
    }

    printf("checksum = %x\n", v_value);
    return 0;
}