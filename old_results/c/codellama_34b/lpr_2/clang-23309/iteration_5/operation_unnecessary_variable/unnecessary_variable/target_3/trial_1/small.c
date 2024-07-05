
int fn2(int p1, int p2) { return p1 - p2; }
int t;
int v_int;
short w;
unsigned ac = 1;
int main() {
  short an;
  w = 0;
  an = 0x294A;
  int ac_val = ac;                // optimized out
  short w_val = w;                // optimized out
  t = ac_val || (w_val = an);     // optimized out
  short ao = 0xBCD1;
  int temp = ao - (1 - w_val);
  v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
