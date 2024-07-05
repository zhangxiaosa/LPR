
unsigned ac = 1;
int main() {
  short an = 0x294A;
  int tmp1 = ac || (an = 0);
  short ao = 0xBCD1;
  int tmp2 = ao - (1 - an);
  int v_int = 0;
  printf("checksum = %d\n", v_int);
  return 0;
}
