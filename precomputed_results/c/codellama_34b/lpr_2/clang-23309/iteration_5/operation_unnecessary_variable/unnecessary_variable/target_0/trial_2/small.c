
int fn2(int p1, int p2) { return p1 - p2; }
int t;
int v_int;
short w;
unsigned ac = 1;
int main() {
  short an;
  w = 0;
  an = 0x294A;
  int ac_val = 1;
  short w_val = w;
  t = ac_val || (w_val = 0xBCD1 - (1 - an));
  v_int = fn2(t, w_val) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
