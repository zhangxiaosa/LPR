
#include <stdio.h>

int e;
int fn1(int h, int *h_ptr) {
    if (e) {
        *h_ptr = 0xEEACFBBFL;
        fn1(h, h_ptr);
        return 0xEEACFBBFL;
    }
    fn1(h, h_ptr);
    return 0xEEACFBBFL;
}

int main() {
    int h = 0;
    int h_ptr = &h;
    int result;

    result = fn1(h, h_ptr);

    printf("%d\n", h);

    return 0;
}
