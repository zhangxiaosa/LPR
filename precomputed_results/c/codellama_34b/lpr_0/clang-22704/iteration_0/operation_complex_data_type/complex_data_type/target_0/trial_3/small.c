
#include <stdio.h>

struct c {
    int d;
    int e;
};

int fn1(struct c *f) {
    int h = 6L;
    if (f->e)
        goto i;
    fn1(f);
    int j;
    return j;
i:
    f->d = h;
    fn1(f);
    j = 0xEEACFBBFL;
    return j;
}

int main() {
    struct c f = { 0, 0 };
    int result = fn1(&f);
    printf("f.d = %d\n", f.d);
    return 0;
}
