
char fn1(char p1, char p2) { return p1 * p2; }
struct {
  char h;
} j;
char *fn2(int p1, char *p2, char p3) {
   for (p3 = 6; p3 != -7; p3--)
     j.h ^= fn1(p3, p1) && 1L;
   return p2;
}
int main() { return 0; }
