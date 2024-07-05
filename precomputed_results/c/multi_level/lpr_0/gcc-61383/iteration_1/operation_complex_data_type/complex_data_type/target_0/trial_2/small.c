int fn1(int p1, int p2) {
    return p2 == 0 ? p1 : p1 % p2;
}

int fn3(int p1, int p2) {
    int part1 = p1 && p2 && p1 > 2147483647 - p2;
    int part2 = p1 < 0 && p2 < 0 && p1;
    int result = part1 ? p1 : (part2 ? p1 : p1 + p2);
    return result;
}

unsigned n;
int o;

signed fn6() {
    for (; n < 12; n = fn3(n, 3)) {
        int ab = (o == 0 ? o : o % o);
        if (o <= 0xE3L) {
            ;
        } else if (ab) {
            break;
        }
    }
    return 0;
}

int main() {
    fn6();
}