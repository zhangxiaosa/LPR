
int fn2(int p1, int p2) {
  return p1 - p2;
}

int t;
int v_int;
short w;
unsigned ac = 1;

int main() {
  short an;
  int ao;
  int temp;

  w = 0;
  an = 0x294A;
  temp = ac | (an = w);
  ao = 0xBCD1;
  if (fn2(ao - (1 - an), temp) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
