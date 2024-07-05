
typedef char a;
typedef int b;
typedef unsigned c;

b fn1(b p1, b p2) { return p1 * p2; }

struct g {
  signed h;
};

b i;
g j;

b *fn2(c p1, b *p2, b p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return p2;
}

int main() { return 0; }
