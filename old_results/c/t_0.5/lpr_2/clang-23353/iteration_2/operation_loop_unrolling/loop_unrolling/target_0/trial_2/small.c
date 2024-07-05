char fn1(char p1, char p2) {
    return p1 * p2;
}

signed i;
signed j;

int main() {
    signed p3;

    // Unrolled loop
    p3 = 6;
    j ^= fn1(p3, i) && 1L;

    p3 = 5;
    j ^= fn1(p3, i) && 1L;

    p3 = 4;
    j ^= fn1(p3, i) && 1L;

    p3 = 3;
    j ^= fn1(p3, i) && 1L;

    p3 = 2;
    j ^= fn1(p3, i) && 1L;

    p3 = 1;
    j ^= fn1(p3, i) && 1L;

    p3 = 0;
    j ^= fn1(p3, i) && 1L;

    p3 = -1;
    j ^= fn1(p3, i) && 1L;

    p3 = -2;
    j ^= fn1(p3, i) && 1L;

    p3 = -3;
    j ^= fn1(p3, i) && 1L;

    p3 = -4;
    j ^= fn1(p3, i) && 1L;

    p3 = -5;
    j ^= fn1(p3, i) && 1L;

    p3 = -6;
    j ^= fn1(p3, i) && 1L;

    p3 = -7;
    j ^= fn1(p3, i) && 1L;

    // End of unrolled loop

    // Final result
    // ...

    return 0;
}