#include <stdio.h>

void inline_fn1(unsigned p1, int p2) {
    printf("checksum = %X\n", p1);
}

unsigned h;

void inline_fn4(const unsigned &p1, const char *p2, const int &p3) {
    h = p1;
}

int main() {
    const int t = 0;

    {
        short q;
        int i;
        short r = o;
        q = r;
        for (i = 0; i < 10; i++) {
            while (q > 1) {
                q -= 1;
            }
        }
        p = q;
    }

    inline_fn4(p, "g_4689", t);
    inline_fn1(h, t);

    return 0;
}
