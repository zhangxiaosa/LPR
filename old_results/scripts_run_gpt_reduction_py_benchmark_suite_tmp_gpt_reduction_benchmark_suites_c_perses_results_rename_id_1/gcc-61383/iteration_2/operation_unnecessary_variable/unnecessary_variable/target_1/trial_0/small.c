int fn3(int p1, int p2) {
  if (p1 && p2 && p1 > 2147483647 - p2)
    return p1;
  return p1 + p2;
}

unsigned m;
unsigned n;
int o;

int fn5(p1) {
  unsigned loopCount = m;
  for (;;) {
    loopCount = fn3(loopCount, 3);
    int temp = 0;
    if (temp)
      break;
  }
  return m;
}

int main() {
  return 0;
}