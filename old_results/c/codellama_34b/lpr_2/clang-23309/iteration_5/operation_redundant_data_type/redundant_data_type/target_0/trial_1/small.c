
int t;
int v_int;
short w;
unsigned ac = 1;
int main() {
  short an;
  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = temp & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
