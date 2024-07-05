
char fn1(signed char p1, signed char p2) { return p1 * p2; }
struct {
  signed h;
} g;
struct {
  signed h;
} j;
int *fn2(unsigned int p1, int *p2, signed char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, p1) && 1L;
  return p2;
}
int main() { return 0; }
