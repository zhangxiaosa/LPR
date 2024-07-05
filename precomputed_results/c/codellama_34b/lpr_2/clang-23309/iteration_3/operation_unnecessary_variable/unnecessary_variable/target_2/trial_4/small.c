c
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int p;
int t;
int v_int;
short w;

int fn13() {
  if (w >= 3) {
    if (fn2(0xBCD1 - 0x6008822D, 0) & 1)
      break;
  }
  return 0;
}

int main() {
  fn13();
  p = v_int;
  printf("checksum = %d\n", p);
  return 0;
}
