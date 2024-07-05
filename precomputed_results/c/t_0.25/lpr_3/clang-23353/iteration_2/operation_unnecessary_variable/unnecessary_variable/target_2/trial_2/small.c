char fn1(char p1, char p2) {
  return p1 * p2;
}

signed h;
int i;

int main() {
  h ^= fn1(6, i) && 1L;
  char b = (char)h;
}