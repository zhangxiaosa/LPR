unsigned f;
int g;

void fn1() {
    unsigned k;
    int j = 0x24F96B7BL;
    unsigned p = g;

q:
    k >>= 1;
    
    if (p) {
        k <<= j;
        goto q;
    }
}