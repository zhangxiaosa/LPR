unsigned fn1(unsigned p2) {
    return p2;
}

int main() {
    struct m {
        signed n : 18;
        signed o : 1;
    };
    
    struct m ad = {1957};
    unsigned o = fn1(5);
    int ae = o;
    ad.o = 0;
    
    int r;
    unsigned t;

    r = t % (4 / ae);
}