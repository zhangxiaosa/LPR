char fn1(char p1, char p2) {
  return p1 * p2;
}

signed i;
signed j;
int main() {
  for (char p3 = 6; p3 != -7; p3--)
    j ^= fn1(6, i) && 1L;
  return 0;
}