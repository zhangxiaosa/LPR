typedef int c;

typedef unsigned d;

typedef unsigned f;

f fn2(f p1, f p2) { return p1 - p2; }

c k;

unsigned l;

volatile f m[5][8];

int main() {
    for (;;) {
        for (; l; l++) {
            for (k = 0; k >= -108; k = k - 24) {
                f p1 = 0x4FL;
                p1 = p1 - fn2(0x4FL, p1);
            }
        }
        f p1 = 0x4FL;
        p1 || m[2][5];
    }
}
