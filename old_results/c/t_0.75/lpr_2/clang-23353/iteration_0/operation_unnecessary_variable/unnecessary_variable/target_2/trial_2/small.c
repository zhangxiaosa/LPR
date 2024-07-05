char fn1(char p1, char p2) {
  return p1 * p2;
}

struct g {
  signed h;
};

int i;
struct g j;

int *fn2(unsigned p1, int *p2, char p3) {
  p3 = 6; // Constant propagation
  j.h ^= (p3 * i) && 1L; // Copy propagation
  return p2;
}

int main() {
  return 0;
}