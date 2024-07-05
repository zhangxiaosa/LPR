
<SYS>

int fn2(int p1, int p2) { return p1 - p2; }
int t_int;
int v_int;
short w_short;
unsigned ac_unsigned;
int main() {
  short an_short;
  w_short = 0;
  an_short = 0x294A;
  t_int = ac_unsigned || (an_short = w_short);
  short ao_short = 0xBCD1;
  int temp_int = ao_short - (1 - an_short);
  if (fn2(temp_int, t_int) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
</SYS>
