char fn1(char p1) { return p1; }

int i;
int j_h;

int main() {
  char p3;
  for (p3 = 6; p3 >= -7; p3 -= 1)
    j_h ^= fn1(p3) && 1L;
  return 0;
}