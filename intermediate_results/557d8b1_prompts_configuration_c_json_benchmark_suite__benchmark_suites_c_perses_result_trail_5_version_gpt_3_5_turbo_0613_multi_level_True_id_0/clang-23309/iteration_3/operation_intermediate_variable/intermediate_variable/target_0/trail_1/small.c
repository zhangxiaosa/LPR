long fn1(long p1, long p2) {
  return p1 - p2;
}

long f;
long g;
short a = 1;

int main() {
  for (g = 3; g; g -= 1) {
    if (true) {
      short d = 0xBCD1;
      if (fn1(d, -249U) - 1) {
        f = 1;
      }
    }
  }
  printf("checksum = %lX\n", f);
  return 0;
}