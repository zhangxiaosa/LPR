long fn1(long p1, long p2) {
  return p1 - p2;
}

long f;
unsigned g;
short a = 1;

int main() {
  int c;

  for (g = 3; g; g -= 1) {
    c = 250U;
    short d = 0xBCD1;

    if (fn1(d, -250) - 1 & 1)
      f = 1;
  }

  printf("checksum = %lX\n", f);
  return 0;
}