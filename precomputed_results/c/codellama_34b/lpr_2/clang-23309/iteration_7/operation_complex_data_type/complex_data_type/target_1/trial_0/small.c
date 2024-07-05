
int t;
int v_int;
unsigned int ac = 1;
int main() {
  short an = 0x294A;
  int an_value = an;
  int tmp1 = ac || (an_value = 0);
  short ao = 0xBCD1;
  int ao_value = ao;
  int tmp2 = ao_value - (1 - an_value);
  int tmp3 = tmp2 - tmp1 & 1;
  v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
