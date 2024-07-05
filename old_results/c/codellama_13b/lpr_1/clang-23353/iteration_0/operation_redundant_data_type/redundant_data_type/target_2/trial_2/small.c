
unsigned int fn1(unsigned int p1, unsigned int p2) { return p1 * p2; }
struct {
  signed h;
} g;
int i;
struct {
  signed h;
} j;
unsigned int *fn2(unsigned int p1, unsigned int *p2, unsigned int p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return p2;
}
int main() { return 0; }
