
void fn1(p1) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

int fn5(int p1, int p2) { return p2; }

int fn6(int p1, int p2) { return p1 - p2; }

int p;
int w;
long v;

int fn13() {
  int al = 3L;
  long am = 1L;
  for (w = 3; w; w -= 1) {
    short an = 250UL;
    if (fn2(0xBCD1L - fn4(fn6(1L, an), 0xECL), 0) & 1UL)
      v = 1;
  }
  return al;
}

int main() {
  fn13();
  p = v;
  fn1(p);
  return 0;
}
