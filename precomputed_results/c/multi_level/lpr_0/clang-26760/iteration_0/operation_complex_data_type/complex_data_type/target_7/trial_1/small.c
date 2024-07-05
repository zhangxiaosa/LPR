typedef signed int a;

typedef int c;

typedef unsigned int d;

typedef unsigned int e;

d f;
int g = 0x24F96B7B;
a i;
c j = 0x24F96B7BL;
e k;
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
}