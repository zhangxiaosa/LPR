#include <stdint.h>


typedef int32_t c;
typedef uint8_t d;
typedef uint32_t e;

d fn1(d p1, int32_t p2) { return p1 ? p1 : p2; }

struct i {
    int32_t j;
    c l;
};

e m[4];
struct i n[2];

uint32_t fn3() {
    e s;
    struct i v = {0x15L};
    c w;
    for (; w; w += 1)
        for (s = 0; s <= 39; ++s)
            for (v.j = 0; v.j <= 2; v.j += 1) {
                n[0].j = v.j;
                v.l = m[v.j];
                w = fn1(n[0].l, 2);
                for (; a; a -= 4)
                    n[0].j = v.j;
            }
    return 0;
}

int32_t main() {}
