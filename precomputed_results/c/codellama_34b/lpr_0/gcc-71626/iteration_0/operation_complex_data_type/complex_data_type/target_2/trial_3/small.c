
#include <stdint.h>

typedef long a;

fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() { return (d){fn1}; }

main() {
    a e = (a)d;
    a f = (a)e;
    a g = (a)f;
    a h = (a)g;
    a i = (a)h;
    a j = (a)i;
    a k = (a)j;
}
