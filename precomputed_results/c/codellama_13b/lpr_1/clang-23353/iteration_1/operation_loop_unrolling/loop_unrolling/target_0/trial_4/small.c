
char fn1(char p1, char p2) { return p1 * p2; }
int i;
struct {
  char h;
} j;
char *fn2(int p1, char *p2, char p3) {
  j.h ^= fn1(p3, i) && 1L;
  j.h ^= fn1(p3 - 1, i) && 1L;
  j.h ^= fn1(p3 - 2, i) && 1L;
  j.h ^= fn1(p3 - 3, i) && 1L;
  j.h ^= fn1(p3 - 4, i) && 1L;
  j.h ^= fn1(p3 - 5, i) && 1L;
  j.h ^= fn1(p3 - 6, i) && 1L;
  j.h ^= fn1(p3 - 7, i) && 1L;
  return p2;
}
int main() { return 0; }
