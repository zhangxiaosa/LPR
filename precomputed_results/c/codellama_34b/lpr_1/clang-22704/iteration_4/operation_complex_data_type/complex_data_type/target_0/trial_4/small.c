
#include <stdio.h>

int e;
int fn1(int *h) {
    if (e) {
        *h = 0xEEACFBBFL;
        fn1(h);
        return 0xEEACFBBFL;
    }
    fn1(h);
    return 0xEEACFBBFL;
}

int main() {
    int h;
    e = 5;
    fn1(&h);
    printf("The value of h is: %d\n", h);
    return 0;
}
