
int fn2(int p1, int p2) { return p1 - p2; }
int t;
int v_int;
short w;
unsigned ac = 1;
int main() {
  short an;
  w = 0;
  an = 0x294A;
  t = (an - 1) & 1;
  v_int = fn2(t, 0);
  printf("checksum = %d\n", v_int);
  return 0;
}
