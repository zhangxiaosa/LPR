
int t;
int v_int;
unsigned int ac = 1;
int tmp1;
short an = 0x294A;
short ao = 0xBCD1;
int tmp2;
int tmp3;

int main() {
  tmp1 = ac || (an = 0);
  tmp2 = ao - (1 - an);
  tmp3 = tmp2 - tmp1 & 1;
  v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
