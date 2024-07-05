
#include <stdio.h>

int main() {
    int d;
    int fn1() {
        if (0)
            goto i;
        fn1();
        return 0xEEACFBBFL;
    i:
        d = 0xEEACFBBFL;
        fn1();
        return 0xEEACFBBFL;
    }
    return 0;
}
