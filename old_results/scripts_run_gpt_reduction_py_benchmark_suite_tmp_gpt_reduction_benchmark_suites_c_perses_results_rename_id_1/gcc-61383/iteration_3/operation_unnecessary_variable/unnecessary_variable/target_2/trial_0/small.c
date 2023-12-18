unsigned m;
int o;

int fn3(int p1, int p2) {
  if (p1 && p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}

int fn5() {
  unsigned loopCount = m;
  for (; loopCount < 12; loopCount = fn3(loopCount, 3)) {
    int temp = 0;
    if (p1 > 0xE3L && temp)
      break;
  }
  return m;
}

int main() {
  fn5();
}