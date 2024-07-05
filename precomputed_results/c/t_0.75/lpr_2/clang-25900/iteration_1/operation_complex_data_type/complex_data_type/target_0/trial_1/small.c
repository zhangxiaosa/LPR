unsigned fn1(unsigned p1, int p2) {
    return p2;
}

int r;
static int s = -5L;
unsigned t;
struct m {
    int n;
    int o;
};

int main() {
    struct m ad;
    ad.n = 1957;
    ad.o = fn1(0, 5);
    int ae;
    ae = ad.o;
    ad.o = ad.o;
    r = t % (~s / ae);
    int optimized_ad_o = ad.o;
}