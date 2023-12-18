int fn3(int p1) {
  if (p1 && p2 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1;
}

unsigned m;
int o;

int fn5(p1) {
  unsigned loopCount = m;
  for (; loopCount < 12; loopCount = fn3(loopCount)) {
    int temp = p1 == 0 ? p1 : p1 % p1;
    if (p1 <= 0xE3L)
      ;
    else if (temp)
      break;
  }
  return m;
}

int main() { fn5(o); }
