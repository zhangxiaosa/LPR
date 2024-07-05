
int main() {
    char j;
    char fn1(char p1, char p2) { return p1 * p2; }
    char fn2(p3) {
        for (p3 = 6; p3 != -7; p3--)
            j ^= fn1(p3, 0) && 1L;
        return 0;
    }
    fn2(0);
}
