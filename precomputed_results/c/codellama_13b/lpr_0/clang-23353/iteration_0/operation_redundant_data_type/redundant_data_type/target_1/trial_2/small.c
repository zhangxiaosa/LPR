
typedef char a;
typedef int c;
typedef unsigned d;
a fn1(char p1, char p2) { return p1 * p2; }
struct e {
  signed f;
};
int g;
struct e h;
int *fn2(unsigned p1, int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    h.f ^= fn1(p3, g) && 1L;
  return p2;
}
int main() { return 0; }
