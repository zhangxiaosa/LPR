char fn1(char p1, char p2) { return p1 * p2; }

signed h;
int i;

int main() {
  h = 0;
  for (int count = 0; count < 14; count++)
    h ^= fn1(6, i) && 1L;
  return 0;
}