
void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
short fn6(short p1, short p2) { return p1 - p2; }

int fn13() {
  short ae = 1UL;
  fn12(ae, ae, 2L, 0, 2L);
  return ae;
}

int main() {
  fn13();
  fn9(1UL, "g_170", 0);
  return 0;
}
