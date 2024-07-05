
int fn2(int p1, int p2) { return p1 - p2; }
int t;
int v_int;
int main() {
  short an = 0x294A;
  t = an || (an = 0);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
