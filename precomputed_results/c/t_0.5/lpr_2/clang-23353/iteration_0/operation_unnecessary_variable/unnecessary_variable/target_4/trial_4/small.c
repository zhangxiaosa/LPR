char fn1(char p1, char p2) { return p1 * p2; }

signed i;
signed j;

int main() {
  j ^= fn1(6, i) && 1L;
  j ^= fn1(5, i) && 1L;
  j ^= fn1(4, i) && 1L;
  j ^= fn1(3, i) && 1L;
  j ^= fn1(2, i) && 1L;
  j ^= fn1(1, i) && 1L;
  j ^= fn1(0, i) && 1L;
  return 0;
}