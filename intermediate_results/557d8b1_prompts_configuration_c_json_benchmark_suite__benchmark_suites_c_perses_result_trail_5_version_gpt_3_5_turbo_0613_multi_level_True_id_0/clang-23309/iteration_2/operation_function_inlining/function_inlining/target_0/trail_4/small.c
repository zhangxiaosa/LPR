long f;
short g;
short a = 1;

int main() {
  int c;
  for (g = 3; g; g -= 1) {
    if (1) {
      a || (c = g);
      short d = 0xBCD1;
      if ((d - 1 + c - a) & 1UL) {
        f = 1;
      }
    }
  }
  printf("checksum = %lX\n", f);
  return 0;
}