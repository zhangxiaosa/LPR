
unsigned ac = 1;
int main() {
  short an = 0x294A;
  int tmp1 = ac || (an = 0);
  int tmp2 = tmp1 - (1 - an);
  int tmp3 = tmp2 & 1;
  int v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
