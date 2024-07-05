int fn1(int p1, int p2) { return p2; }

struct m {
    int n;
    int o;
};

int main() {
    struct m ad = {1957};
    ad.o = fn1(5, 5);
    int ae = ad.o;
    ad.o = 5;
    int r = 0;
    int ad_n = ad.n;
    int ad_o = ad.o;

    return r;
}