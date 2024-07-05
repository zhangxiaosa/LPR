char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed j;
int *fn2(unsigned p1, int *p2, char p3) {
    p3 = 6;
    j ^= fn1(p3, i) && 1L;
    p3--;
    j ^= fn1(p3, i) && 1L;
    p3--;
    j ^= fn1(p3, i) && 1L;
    p3--;
    j ^= fn1(p3, i) && 1L;
    p3--;
    j ^= fn1(p3, i) && 1L;
    return p2;
}

int main() { return 0; }