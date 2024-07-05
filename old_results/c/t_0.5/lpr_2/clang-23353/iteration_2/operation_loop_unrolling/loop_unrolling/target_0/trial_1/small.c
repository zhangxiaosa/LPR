char fn1(char p1, char p2) { return p1 * p2; }

signed i;
signed j;
int main() {
  signed p3;

  p3 = 6;
  j ^= fn1(p3, i) && 1L;

  p3--;
  j ^= fn1(p3, i) && 1L;

  p3--;
  j ^= fn1(p3, i) && 1L;

  p3--;
  j ^= fn1(p3, i) && 1L;
}