
int t;
int v_int;
unsigned int ac = 1;
int main() {
  short ao = 0xBCD1;
  int tmp2 = ao - (1 - 0x294A);
  int tmp3 = tmp2 - (ac || 0x294A) & 1;
  v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
