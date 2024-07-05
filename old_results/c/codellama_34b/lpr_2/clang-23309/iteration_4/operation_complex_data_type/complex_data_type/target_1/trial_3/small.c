
int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  short an;
  unsigned ac_0;
  unsigned ac_1;
  short w;
  int t;
  int v_int;

  w = 0;
  an = 0x294A;
  ac_0 = 1;
  ac_1 = an;
  t = ac_0 || (ac_1 = w);
  short ao = 0xBCD1;
  if (fn2(ao - (1 - an), t) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
