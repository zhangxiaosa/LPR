char fn1(char p1, char p2) {
    return p1 * p2;
}

signed i;
signed j;

int main() {
    char p3;

    // Iteration 1
    p3 = 6;
    j ^= fn1(p3, i) && 1L;

    // Iteration 2
    p3 = 5;
    j ^= fn1(p3, i) && 1L;

    return 0;
}