#include<stdio.h>

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

int main() {
    int d = 2L;

    for (; u < 51; ++u) {
        printf("checksum = %X\n", fn3(4L, d));
        d = fn4(fn3(4L, d), 0x9EE7F9D1C772505BLL);
    }

    return 0;
}