
int t;
int v_int;
unsigned int ac = 1;
int main() {
  short an = 0x294A;
  int tmp1 = ac || (an = 0);
  int tmp2 = an + 1;
  int tmp3 = tmp2 - tmp1 & 1;
  v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
