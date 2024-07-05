
char fn1(char p1, char p2) { return p1 * p2; }
int i;
struct {
  char h;
} j;
char *fn2(int p1, char *p2, char p3) {
  char p4, p5, p6, p7;
  p4 = 6;
  p5 = p4 - 1;
  p6 = p5 - 1;
  p7 = p6 - 1;
  j.h ^= fn1(p7, i) && 1L;
  j.h ^= fn1(p6, i) && 1L;
  j.h ^= fn1(p5, i) && 1L;
  j.h ^= fn1(p4, i) && 1L;
  return p2;
}
int main() { return 0; }
