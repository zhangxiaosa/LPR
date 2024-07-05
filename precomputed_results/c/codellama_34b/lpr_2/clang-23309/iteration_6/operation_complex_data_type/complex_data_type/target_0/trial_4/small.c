
int t;
int v_int;
unsigned ac = 1;
int main() {
  short an_high = 0x29;
  short an_low = 0x4A;
  t = ac || (an_high = 0);
  short ao = 0xBCD1;
  int temp = ao - (1 - an_high);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
