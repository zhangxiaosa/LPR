
int fn2(int p1, int p2) { return p1 - p2; }

int main() {
  int t = 0;
  int v_int = 0;
  short w = 0;
  unsigned ac = 1;
  short an = 0x294A;
  short ao = 0xBCD1;

  t = ac || (an = w);
  int temp = ao - (1 - an);

  if (fn2(temp, t) & 1)
    v_int = 1;

  printf("checksum = %d\n", v_int);
  return 0;
}
