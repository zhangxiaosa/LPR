typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;

d f;
a g;

int main() {
    a i;
    c j = 0x24F96B7BL;
    e k;

    // Unrolled loop (unrolled four times)
    // Loop iteration 1
    f = 0;
    j = 0;

    // Loop iteration 2
    f = 0;
    j = 0;

    // Loop iteration 3
    f = 0;
    j = 0;

    // Loop iteration 4
    f = 0;
    j = 0;

    c l = 1L;
    c m = j;
    a n = g;
    c o = n;
    e p = o;

q:
    k = k >> l;
    i = p;
    if (i) {
        k = k << m;
        goto q;
    }

    return 0;
}