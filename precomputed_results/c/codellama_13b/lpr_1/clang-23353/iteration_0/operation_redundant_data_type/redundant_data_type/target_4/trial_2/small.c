
char fn1(signed char p1, signed char p2) { return p1 * p2; }
struct {
  signed char h;
} g;
signed char i;
struct {
  signed char h;
} j;
signed char *fn2(unsigned int p1, signed char *p2, signed char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return p2;
}
int main() { return 0; }
