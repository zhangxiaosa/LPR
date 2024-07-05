
int t;
int v_int;
unsigned ac = 1;
int main() {
  short an = 0x294A;
  int temp = ac || (an = 0);
  short ao = 0xBCD1;
  temp = ao - (1 - an);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
