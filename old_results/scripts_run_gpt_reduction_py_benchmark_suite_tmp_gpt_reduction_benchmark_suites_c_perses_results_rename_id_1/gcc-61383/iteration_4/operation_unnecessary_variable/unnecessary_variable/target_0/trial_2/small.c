int fn3(int p1, int p2) {
  if (p1 && p2 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}

unsigned m;

int main() {
  unsigned loopCount = m;
  for (; loopCount < 12; loopCount = fn3(loopCount, 3)) {
    if (<= 0xE3L)
      ;
    else
      break;
  }
  return m;
}