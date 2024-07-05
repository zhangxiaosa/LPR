
int t;
int v_int;
unsigned int ac = 1;
int main() {
  short an = 0x294A;
  int an_int = (int)an;

  short ao = 0xBCD1;
  int ao_int = (int)ao;

  int tmp1 = ac || (an_int = 0);
  int tmp2 = ao_int - (1 - an_int);
  int tmp3 = tmp2 - tmp1 & 1;
  v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
