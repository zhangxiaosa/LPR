unsigned fn1(unsigned p2) {
    return p2;
}

struct m {
    signed n : 18;
    signed o : 1;
};

unsigned r;
static signed s = -5L;

int main() {
    struct m ad = {1957, fn1(5)};
    signed ae;
    ae = ad.o;
    ad.o = ad.o;
    r = 0 % (~s / ae);
}
