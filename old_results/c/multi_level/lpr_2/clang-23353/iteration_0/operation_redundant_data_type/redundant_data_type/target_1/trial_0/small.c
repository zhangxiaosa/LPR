signed fn1(signed p1, signed p2) { return p1 * p2; }

signed h;
int i;
signed j;

int *fn2(unsigned p1, int *p2, signed p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}

int main() { return 0; }