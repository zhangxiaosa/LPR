int fn3(int p1, int p2) {
  if (p1)
    return p1;
  else if (p1 < 0 && p2 < 0)
    return p1;
  else
    return p1 + p2;
}

unsigned m;
unsigned n;

int fn5(int p1) {
  unsigned loopCount = m;
  for (; loopCount < 12; loopCount = fn3(loopCount, 3)) {
    int temp = p1;
    if (p1 <= 0xE3L)
      ;
    else if (temp)
      break;
  }
  return m;
}

int main() {
  if (fn5(o))
    ;
}