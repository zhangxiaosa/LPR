
int fn2(int p1, int p2) { return p1 - p2; }
int t;
int v_int;
short w;
unsigned ac = 1;
int main() {
  w = 0;
  t = ac || (w = 0x294A);
  int temp = 0xBCD1 - (1 - 0x294A);
  if (fn2(temp, t) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
