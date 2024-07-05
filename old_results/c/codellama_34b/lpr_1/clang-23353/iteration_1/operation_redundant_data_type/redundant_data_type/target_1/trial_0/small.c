
<SYS>

// The original program with the specified data type
char fn1(char p1, char p2) { return p1 * p2; }
struct g {
  int h;
};
int i;
struct g j;
int fn2(p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return 0;
}
int main() { return 0; }

// The optimized program with the target data type
int fn1(int p1, int p2) { return p1 * p2; }
struct g {
  int h;
};
int i;
struct g j;
int fn2(int p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return 0;
}
int main() { return 0; }

</SYS>
