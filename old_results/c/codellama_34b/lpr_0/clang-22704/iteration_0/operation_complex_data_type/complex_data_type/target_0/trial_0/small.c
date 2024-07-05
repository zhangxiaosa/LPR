
#include <stdio.h>

struct c {
    int d;
    int e;
};
struct c f;

int fn1() {
    int h = 6;
    if (f.e) {
        goto i;
    }
    fn1();
    int j;
    return j;
i:
    d = h;
    e = 1;
    fn1();
    j = 0xEEACFBBFL;
    return j;
}

int main() {
    f.d = 0;
    f.e = 1;
    int result = fn1();
    printf("Result: %d\n", result);
    return 0;
}
