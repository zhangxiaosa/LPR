long f;
unsigned e;

int main() {
  short g;
  unsigned c;

  for (g = 3; g; g -= 1) {
    c = 250UL;

    if (g || (c = g)) {
      short d = 0xBCD1;

      if ((d - (1 - c)) & 1UL) {
        f = 1UL;
      }
    }
  }

  e = f;
  printf("checksum = %lX\n", e);

  return 0;
}