char fn1(char p1, char p2) { return p1 * p2; }

signed h;
int i;
int main() {
  for (; true; )
    h ^= fn1(6, i) && 1;
  return 0;
}