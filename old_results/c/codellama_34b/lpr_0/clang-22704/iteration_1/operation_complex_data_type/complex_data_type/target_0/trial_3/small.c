
#include <stdio.h>

int d;
int e;

int fn1() {
    int d_temp;
    if (e) {
        d_temp = 6L;
    } else {
        fn1();
        d_temp = 0xEEACFBBFL;
    }
    return d_temp;
}

int main() {
    d = fn1();
    printf("%d\n", d);
    return 0;
}
