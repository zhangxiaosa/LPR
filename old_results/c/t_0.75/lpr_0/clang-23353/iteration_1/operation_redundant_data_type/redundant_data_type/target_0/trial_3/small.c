signed fn1(signed p1, signed p2) { return p1 * p2; }

int i;
signed j_h;
signed *fn2(signed p1, signed *p2, signed p3) {
  for (p3 = 6; p3 >= -3; p3 -= 4)
    j_h ^= fn1(p3, i) && 1L;
  return p2;
}

int main() { return 0; }
