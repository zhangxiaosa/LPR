char fn1(char p1) { return p1 * 0; }

signed i;
signed j;
int main() {
  signed p3;
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3) && 1L;
}