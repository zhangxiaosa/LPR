char fn1(char p1, char p2) {
    return p1 * p2;
}

int i;
int j_h;
int* p2;

int* fn2(unsigned int p1, int* p2_addr, signed int p3) {
    p2 = p2_addr;
    for (p3 = 6; p3 != -7; p3--) {
        j_h ^= fn1(p3, i) && 1L;
    }
    return p2;
}

int main() {
    return 0;
}