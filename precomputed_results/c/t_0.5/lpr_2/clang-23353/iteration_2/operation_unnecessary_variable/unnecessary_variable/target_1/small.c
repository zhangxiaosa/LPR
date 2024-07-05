char fn1(char p1, char p2) { return p1 * p2; }

signed i;
signed j;

int main() {
  long p3;
  signed i_copy = i; // Copy propagation
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i_copy) && 1L;
}