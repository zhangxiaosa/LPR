char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;
int j_h;

int *fn2(unsigned p1, int *p2, char p3) {
    p3 = 6;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    p3--;
    j_h ^= fn1(p3, i) && 1L;
    
    return p2;
}

int main() {
    return 0;
}