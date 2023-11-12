long fn1(long p1, long p2) { return p1 - p2; }

long fn2(long p1, long p2) { return p1; }

long f;
long g;
long a = 1;

int main() {
  int c;
  for (g = 3; g; g -= 1) {
    if (c = 250U) {
      a || (c = g);
      long d = 0xBCD1;
      if (fn1(d, fn2(1U - c, 0xEC)) - a & 1)
        f = 1;
    }
  }
  printf("checksum = %lX\n", f);
  return 0;
}