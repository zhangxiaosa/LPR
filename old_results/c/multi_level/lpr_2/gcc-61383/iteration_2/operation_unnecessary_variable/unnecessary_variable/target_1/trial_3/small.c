int fn1(int p2) { return p2 == 0 ? o : o % p2; }

int fn2() { return (short) o; }

int fn3(int p2) { return o && p2 && o > 2147483647 - p2 || o < 0 && p2 < 0 && o ? o : o + p2; }

unsigned n;
int o;
int main() { for (; n < 12; n = fn3(3)) { int ab; if (0x4F92 < fn2(0x01B28DB7 | (ab = fn1(o)))) ; else if (o <= 0xE3) ; else if (ab) break; } return 0; }