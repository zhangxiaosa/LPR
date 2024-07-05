char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;
int j_h;

int main() {
    for (char p3 = 6; p3 >= -7; p3 -= 1)
        j_h ^= fn1(p3, i) && 1L;
    return 0;
}