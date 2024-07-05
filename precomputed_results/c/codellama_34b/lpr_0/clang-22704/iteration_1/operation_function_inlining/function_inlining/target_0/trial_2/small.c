
#include <stdio.h>

int d;
int e;

int fn1() {
    if (e) {
        d = 6L;
    } else {
        fn1();
    }
    return 0xEEACFBBFL;
}

int main() {
    return 0;
}
