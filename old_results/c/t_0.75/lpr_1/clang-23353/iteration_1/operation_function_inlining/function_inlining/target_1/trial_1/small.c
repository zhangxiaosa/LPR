char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;

void fn2(int *p2) {
    for (char p3 = 6; p3 != -7; p3--) {
        *p2 = fn1(p3, i) && 1L;
    }
}

int main() {
    return 0;
}