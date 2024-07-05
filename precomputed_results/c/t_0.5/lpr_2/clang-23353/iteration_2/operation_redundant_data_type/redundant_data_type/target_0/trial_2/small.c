long fn1(long p1, long p2) {
  return p1 * p2;
}

long i;
long j;

int main() {
  long p3;
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
}