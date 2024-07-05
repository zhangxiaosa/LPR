char fn1(char p1, char p2) {
  return p2; // Constant propagation: optimized out p1
}

struct g {
  int h;
};

int i;
struct g j;

int *fn2(unsigned p1, int *p2, unsigned p3) {
  for (p3 = 6; p3 != -7; p3--) {
    j.h ^= 1; // Copy propagation: replaced fn1(p3, i) with constant 1
  }
  return p2;
}

int main() {
  return 0;
}