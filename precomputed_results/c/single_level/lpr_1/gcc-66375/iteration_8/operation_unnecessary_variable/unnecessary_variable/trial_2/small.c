char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int main() {
  for (unsigned u = 0; u < 51; ++u) {
    int d = 2L;
    d = fn2(fn3(4L, d), 3) + 0x9EE7F9D1C772505B;
  }

  printf("checksum = %X\n", fn3(4L, 2L));
  return 0;
}