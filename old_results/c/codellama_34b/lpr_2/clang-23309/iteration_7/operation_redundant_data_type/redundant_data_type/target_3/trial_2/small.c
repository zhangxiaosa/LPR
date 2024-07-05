
int t;
int v_int;
int ac = 1;
int an = 0x294A;
int ao = 0xBCD1;

int main() {
  t = ac || (an = 0);
  int temp = ao - (1 - an);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
