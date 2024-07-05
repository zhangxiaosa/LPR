
typedef unsigned char c;

c fn1(c p1, c p2) { return p1 * p2; }

struct {
  signed h;
} g;

c i;

struct {
  signed h;
} j;

c* fn2(unsigned int p1, c* p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return p2;
}

int main() { return 0; }
