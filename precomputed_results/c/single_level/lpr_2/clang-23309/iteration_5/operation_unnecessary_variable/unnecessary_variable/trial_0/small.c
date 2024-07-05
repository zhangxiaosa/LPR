void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

void fn7(unsigned p1) { }

unsigned fn10(unsigned p1, short p2) { return 0x2F2F6D26L; }

int main() { fn10(0, 0); fn7(0); fn1(0, 0); return 0; }