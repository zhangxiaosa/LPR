char fn1(char p1, char p2) {
    return p1 * p2;
}

signed j;
int main() {
    long p3;
    for (p3 = 6; p3 != -7; p3--)
        j ^= fn1(p3, 0) && 1L;
}