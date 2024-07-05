char fn1(char p1, char p2) {
    return p1 * p2;
}

int j_h;

int fn2(int p3) {
    for (p3 = 6; p3 > -4; p3 -= 4)
        j_h ^= fn1(p3, 0) && 1L;
    return 0;
}

int main() {
    return 0;
}