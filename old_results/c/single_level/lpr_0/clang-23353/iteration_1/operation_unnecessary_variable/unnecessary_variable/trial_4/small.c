char fn1(char p1, char p2) { return p1 * p2; }

signed char j_h;
int i;

int main() {
  for (; 6 != -7; 6--)
    j_h ^= fn1(6, 2) && 1L;
  return 0;
}