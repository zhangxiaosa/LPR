
int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn3(int p1, int p2) {
  return p1 - p2;
}

int v = 1;
char w = 3;
int ac = 1;
int fn10(int p1, int p2) {
  int an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = ac || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
      v = 1;
  }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
