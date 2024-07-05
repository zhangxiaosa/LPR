
short ao;
short an;

int fn2(short p1, short p2) {
  return p1 - p2;
}

int t;
int v_int;
short w;
unsigned ac = 1;

int main() {
  ao = 0x294A;
  an = 0xBCD1;
  t = ac || (an = w);
  if (fn2(ao - (1 - an), t) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
