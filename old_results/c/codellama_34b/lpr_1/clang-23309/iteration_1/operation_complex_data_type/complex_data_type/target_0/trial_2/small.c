
int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn3(int p1, int p2) {
  return p1 - p2;
}

int v;
int w;
int ac = 1;

int fn10(int p1, int p2) {
  w = 3;
  while (w > 0) {
    p2 = ac || (w == 0x294A85636008822D);
    if (fn2(fn3(0xBCD1, 1 - w), p2) & 1) {
      v = 1;
    }
    w--;
  }
  return ac;
}

int main() {
  fn10(0, 0);
  printf("checksum = %X\n", v);
  return 0;
}
