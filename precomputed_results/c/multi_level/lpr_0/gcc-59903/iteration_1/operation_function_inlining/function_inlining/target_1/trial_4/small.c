#include <iostream>

typedef unsigned char unsigned_char;
typedef unsigned e;

unsigned_char fn1(unsigned_char p1, int p2) { 
    return p1 > p2 ? p1 : p1 << p2; 
}

struct i {
    int j;
    int k;
    int l;
};

e m[4];
struct i n[2];

unsigned_char fn3(unsigned_char p1) {
    struct i p2 = {0x15L, -5L};
    if (0 ^ p2.k)
        ;
    else
        p2 = n[1];
    for (int w = 0; w; w += 1)
        for (unsigned s = 0; s <= 39; ++s)
            for (p2.j = 0; p2.j <= 2; p2.j += 1) {
                n[0] = p2;
                p2.l = m[p2.j];
                if (!n[0].j)
                    ;
                else {
                    w = p1 > 2 && p2.k;
                }
            }
    return p2;
}

int main() {}
