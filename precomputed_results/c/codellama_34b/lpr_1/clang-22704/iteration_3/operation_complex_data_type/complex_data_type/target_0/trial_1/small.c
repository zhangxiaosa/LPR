
#include <stdio.h>

int e;
int fn1(int *h) {
    int temp = 0xEEACFBBFL;
    if (e) {
        *h = temp;
        fn1(h);
        return temp;
    }
    fn1(h);
    return temp;
}

int main() {
    int h = 0;
    fn1(&h);
    printf("h = %d\n", h);
    return 0;
}
