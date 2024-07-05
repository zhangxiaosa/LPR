char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;
unsigned j_h;

int main() {
    char p3;

    // Unrolled loop iteration 1
    p3 = 6;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 2
    p3 = 5;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 3
    p3 = 4;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 4
    p3 = 3;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 5
    p3 = 2;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 6
    p3 = 1;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 7
    p3 = 0;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 8
    p3 = -1;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 9
    p3 = -2;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 10
    p3 = -3;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 11
    p3 = -4;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 12
    p3 = -5;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 13
    p3 = -6;
    j_h ^= fn1(p3, i) && 1L;

    // Unrolled loop iteration 14
    p3 = -7;
    j_h ^= fn1(p3, i) && 1L;

    return 0;
}