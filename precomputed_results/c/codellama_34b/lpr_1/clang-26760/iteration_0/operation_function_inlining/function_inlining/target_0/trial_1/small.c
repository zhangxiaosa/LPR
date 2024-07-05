
typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;
d fn1(d f, a g) {
    c j = 0x24F96B7BL;
    e k;
    for (f = 0; f;)
        for (; j; --j)
            ;
    c l = 1L;
    c m = j;
    a n = g;
    c o = n;
    e p = o;
q:;
    k = k >> l;
    i = p;
    if (i) {
        k = k << m;
        goto q;
    }
}
int main() {
    d f = 0;
    a g = 0;
    d result = fn1(f, g);
    return result;
}
