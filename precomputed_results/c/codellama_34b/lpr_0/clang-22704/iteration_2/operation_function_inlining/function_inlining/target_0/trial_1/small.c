
#include <stdio.h>

int d_int;

// Function fn1() with inlining optimization
int fn1() {
    if (d_int) {
        d_int = 6L;
        return 0xEEACFBBFL;
    } else {
        return 0xEEACFBBFL;
    }
}

int main() {
    return 0;
}
