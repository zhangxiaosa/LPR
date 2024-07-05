
char fn1(char p1, char p2) { return p1 * p2; }
int i;
struct {
  char h;
} j;
char *fn2(int p1, char *p2, char p3) {
  // Loop unrolling
  j.h ^= fn1(6, i) && 1L;
  j.h ^= fn1(5, i) && 1L;
  j.h ^= fn1(4, i) && 1L;
  j.h ^= fn1(3, i) && 1L;
  j.h ^= fn1(2, i) && 1L;
  j.h ^= fn1(1, i) && 1L;
  return p2;
}
int main() { return 0; }
