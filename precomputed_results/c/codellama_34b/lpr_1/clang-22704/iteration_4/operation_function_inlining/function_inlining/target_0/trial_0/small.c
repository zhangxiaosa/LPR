
<SYS>

#include <stdio.h>

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
    int h = 0;
    fn1(&h);
    printf("h = %d\n", h);
    return 0;
}

</SYS>
