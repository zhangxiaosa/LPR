
<SYS>
The optimized program with inlined function:

int k;
unsigned l;
volatile int m[5][8];

int main() {
    for (;;) {
        for (; l; l++)
            for (k = 0; k >= -27; k -= 6)
                m[2][5] = 0;
    }
    return 0;
}
