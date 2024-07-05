
int fn1(char p1, char p2) {
  return p1 * p2;
}

struct g {
  signed h;
};

int i;
struct g j;

int *fn2(int *p2, char p3) {
  p3 = 6;
  j.h ^= fn1(p3, i) && 1L;
  p3 = 5;
  j.h ^= fn1(p3, i) && 1L;
  p3 = 4;
  j.h ^= fn1(p3, i) && 1L;
  p3 = 3;
  j.h ^= fn1(p3, i) && 1L;
  p3 = 2;
  j.h ^= fn1(p3, i) && 1L;
  p3 = 1;
  j.h ^= fn1(p3, i) && 1L;
  p3 = 0;
  j.h ^= fn1(p3, i) && 1L;
  return p2;
}

int main() {
  return 0;
}
