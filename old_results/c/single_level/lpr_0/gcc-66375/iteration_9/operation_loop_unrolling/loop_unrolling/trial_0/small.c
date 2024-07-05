#include <stdio.h>

char fn2(char p1, int p2) {
    return p1;
}

int fn3(int p1, int p2) {
    return p2;
}

int fn4(int p1, int p2) {
    return p1 + p2;
}

int u;
int v_00;

int main() {
    int d = 2L;
    v_00 = fn3(4L, d);
    d = fn4(fn2(v_00, 3), 0x9EE7F9D1C772505BLL);
    v_00 = fn3(4L, d);
    d = fn4(fn2(v_00, 3), 0x9EE7F9D1C772505BLL);
    // Repeat the body 49 more times
    // ...
    v_00 = fn3(4L, d);
    d = fn4(fn2(v_00, 3), 0x9EE7F9D1C772505BLL);

    printf("checksum = %X\n", v_00);
    return 0;
}
