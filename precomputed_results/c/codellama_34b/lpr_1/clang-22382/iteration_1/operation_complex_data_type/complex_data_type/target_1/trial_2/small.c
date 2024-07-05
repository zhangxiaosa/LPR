
#include <stdio.h>

int main() {
    int i;
    long j;
    unsigned k;

    struct h {
        int i;
        long j;
        unsigned k;
    };

    static struct h fn1(struct h p5) {
        p5.k;
        goto w;
    }

    long fn2() {
        struct h p;
        fn1(p);
        for (;;) {
            struct h r;
            p = r = p;
        }
    }

    int main() {
        struct h p;
        fn1(p);
        for (;;) {
            struct h r;
            p = r = p;
        }
    }
}
