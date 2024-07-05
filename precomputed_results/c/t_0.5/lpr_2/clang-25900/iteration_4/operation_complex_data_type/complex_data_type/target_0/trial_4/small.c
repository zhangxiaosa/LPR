unsigned fn1(unsigned p2) {
    return p2;
}

struct m {
    int n;
    int o;
};

unsigned r;
static int s = -5L;

int main() {
    struct m ad;
    ad.n = 1957;
    ad.o = fn1(5);

    int ae = ad.o;

    r = 4 % (~s / ae);

    int optimized_ad = ad.o;

    return 0;
}