c
int fn1(int p1, int p2) {
    return p1 - p2;
}

int l;
volatile int m[5][8];

int fn3(int p1) {
    for (;;) {
        for (; l; l++) {
            p1 = fn1(p1, 6);
        }
        if (p1 == 0) {
            break;
        }
    }
}

int main() {}
