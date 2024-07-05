
int fn2(int p1, int p2) { return p1 - p2; }

int main() {
  int ac_val = 1;
  short w_val = 0;
  short an_val = 0x294A;
  short ao_val = 0xBCD1;
  int t = ac_val || (an_val = w_val);
  int temp = ao_val - (1 - an_val);
  int v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
