
char fn1(signed char p1, signed char p2) { return p1 * p2; }
struct {
  signed h;
} g;
int i;
struct {
  signed h;
} j;
signed char *fn2(signed int p1, signed char *p2, signed char p3) {
  for (p3 = 6; p3 != -7; p3--)
    g.h ^= fn1(p3, i) && 1L;
  return p2;
}
int main() { return 0; }
