char fn1(char p1, char p2) { return p1 * p2; }

struct g {
  signed h;
};

int i;
signed h;

int main() {
  char p3;
  signed j_h;

  for (p3 = 6; p3 != -7; p3--) {
    j_h ^= fn1(p3, i) && 1;
  }

  return 0;
}