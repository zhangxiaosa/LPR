
<SYS>

#include <stdio.h>

struct h {
    int i;
    long j;
    int k;
};

static struct h fn1(struct h p5) {
    p5.j;
    for (;;) {
        printf("Inside fn1\n");
        break;
    }
    return p5;
}

unsigned fn2() {
    struct h p;
    fn1(p);
    return 0;
}

int main() {
    fn2();
    return 0;
}

</SYS>
