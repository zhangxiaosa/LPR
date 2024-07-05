
int fn2(int p1, int p2) { return p1 - p2; }
int t;
int v_int;
short w;
unsigned ac = 1;
int main() {
  short an;
  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  int temp = 0xBCD1 - (1 - an);
  if (fn2(temp, t) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
