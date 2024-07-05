
<SYS>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  short an;
  short ao;
  int t;
  int temp;
  int v_int;

  an = 0x294A;
  t = an;
  ao = 0xBCD1;
  temp = ao - (1 - an);
  v_int = temp - t;
  printf("checksum = %d\n", v_int);
  return 0;
}

</SYS>
