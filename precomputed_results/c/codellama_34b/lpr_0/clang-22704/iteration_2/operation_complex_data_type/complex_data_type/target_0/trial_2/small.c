
#include <stdio.h>

int d_int;

int fn1() {
    if (d_int)
        goto j;
    fn1();
    return 0xEEACFBBFL;
j:
    d_int = 6L;
    fn1();
    return 0xEEACFBBFL;
}

int main() {
    int result = fn1();
    printf("The result is: %d\n", result);
    return 0;
}
