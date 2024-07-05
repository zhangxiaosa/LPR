char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j_h;

int main() {
  j_h ^= fn1(-7, i) && 1L;
  return 0;
}