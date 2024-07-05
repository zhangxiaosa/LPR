
int fn2(int p1, int p2) { return p1 - p2; }

int ac = 1;
int an;
short w;

int main() {
  an = 0x294A;
  ac = ac || (an = w);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  int v_int = fn2(temp, ac) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
