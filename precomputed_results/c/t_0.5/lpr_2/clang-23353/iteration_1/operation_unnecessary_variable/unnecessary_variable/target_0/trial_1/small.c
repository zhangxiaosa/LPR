char fn1(char p1, char p2) { return p1 * p2; }

signed i;
signed j;

int main() {
  signed p3 = 6;
  for (; p3 != -7; p3--)
    j ^= fn1(6, i) && 1L;
}