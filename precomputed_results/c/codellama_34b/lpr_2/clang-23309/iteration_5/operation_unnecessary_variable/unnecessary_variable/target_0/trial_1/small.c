
int fn2(int p1, int p2) { return p1 - p2; }
int t;
int v_int;
short w;
short an;
int main() {
  w = 0;
  an = 0x294A;
  short w_val = w;
  t = w_val || (0x294A = w_val);
  short ao = 0xBCD1;
  int temp = ao - (1 - 0x294A);
  v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
