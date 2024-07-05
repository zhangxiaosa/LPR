
int v = 1UL;
int t = 0x2F2F6D26L;
int w = 0xBCD1L;

void fn13() {
  v = fn10(v, t);
}

int fn10(int p1, int p2) {
  int af = 0x2F2F6D26L;
  int ag = 248UL;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      int ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return af;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
