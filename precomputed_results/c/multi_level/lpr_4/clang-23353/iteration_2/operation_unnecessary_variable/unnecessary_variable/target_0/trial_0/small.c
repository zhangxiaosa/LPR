char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j_h;

int main() {
  int p3;
  for (p3 = 6; p3 != -7; p3--) {
    char fn1_result;
    fn1_result = fn1(p3, i);
    j_h ^= fn1_result && 1L;
  }
}