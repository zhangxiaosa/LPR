#include <stdio.h>

char fn2(char p1, int p2) {
    return p1;
}

unsigned u_opt;
unsigned v3;

int main() {
    for (; u_opt < 51; ++u_opt) {
        v3 = fn2(2L, 3) + 0x9EE7F9D1C772505BLL;
    }

    return 0;
}
