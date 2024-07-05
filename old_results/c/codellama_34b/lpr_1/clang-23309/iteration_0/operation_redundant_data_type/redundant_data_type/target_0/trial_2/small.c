
#include <stdio.h>

void fn1(unsigned int checksum) {
    printf("checksum = %X\n", checksum);
}

void fn2(unsigned int a) {
    unsigned int b = 0x2F2F6D26L;
    unsigned int c = 248UL;
    unsigned int d = fn3(c, 1);
    fn1(d);
}

void fn3(unsigned int a) {
    unsigned int b = 0xBCD1L;
    unsigned int c = 1UL;
    unsigned int d = fn4(fn6(c, a), 0xECL);
    fn1(d);
}

void fn4(unsigned int a) {
    unsigned int b = 0x294A85636008822DLL;
    unsigned int c = 250UL;
    unsigned int d = fn5(b, c);
    fn1(d);
}

void fn5(unsigned int a) {
    unsigned int b = 3L;
    unsigned int c = 1L;
    unsigned int d = fn6(c, a);
    fn1(d);
}

void fn6(unsigned int a, unsigned int b) {
    unsigned int c = fn2(a, b);
    fn1(c);
}

int main() {
    unsigned int a = 0xBCD1L;
    unsigned int b = 0x2F2F6D26L;
    unsigned int c = 248UL;
    unsigned int d = fn3(c, 1);
    fn1(d);
    return 0;
}
