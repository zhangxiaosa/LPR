#include <stdio.h>

char fn1(unsigned p1, int p2) {
    return p1 > p2 ? p1 : p1 << p2;
}

int n_0_j;
int n_0_l;
unsigned m[4];

struct i {
    int j;
    int k;
};

struct i fn2(struct i p2) {
    int v_j = 0x15L;
    int w;
    int a;

    if (!v_j) {
        // Do something if v_j is zero
    } else {
        w = fn1(n_0_l, 2) && p2.k;
        for (; a; a += 4)
            n_0_j = v_j;
        n_0_l = m[p2.j];
    }

    return p2;
}

unsigned fn3() {
    struct i r;
    if (fn2(r), 0)
        ;

    return 0;
}

int main() {
    return 0;
}
