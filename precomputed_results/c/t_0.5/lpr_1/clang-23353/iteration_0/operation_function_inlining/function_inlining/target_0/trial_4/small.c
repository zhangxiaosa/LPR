typedef int b;

struct g {
  signed h;
};

b *fn2(unsigned p1, b *p2, char p3, b i) {
  struct g j;
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= p3 * i && 1L;
  return p2;
}

int main() {
  return 0;
}