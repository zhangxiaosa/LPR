
#include <stdio.h>

int d_int;
int e_int;

int fn1() {
    int d_int_local = 0; // Added local variable
    int e_int_local = 0; // Added local variable
    if (e_int_local) {
        goto i;
    }
    fn1();
    return 0xEEACFBBFL;
i:
    d_int_local = 6L;
    fn1();
    return 0xEEACFBBFL;
}

int main() {
    return 0;
}
