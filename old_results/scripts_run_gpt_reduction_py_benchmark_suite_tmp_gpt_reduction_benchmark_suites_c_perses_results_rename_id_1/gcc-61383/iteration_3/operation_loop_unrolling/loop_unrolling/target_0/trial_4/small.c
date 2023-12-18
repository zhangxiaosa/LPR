int fn3(int p1, int p2) {
  if (p1 && p2 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}

unsigned m;
int o;
int fn5(p1) {
  unsigned loopCount = m;

  // Unrolled loop
  if (loopCount < 36) {
    int temp1 = p1 == 0 ? p1 : p1 % p1;
    if (p1 <= 0xE3L)
      ;
    else if (temp1)
      return m;
    loopCount += 3;

    int temp2 = p1 == 0 ? p1 : p1 % p1;
    if (p1 <= 0xE3L)
      ;
    else if (temp2)
      return m;
    loopCount += 3;

    // 10 more unrolled iterations...
  }

  return m;
}

int main() {
  if (fn5(o))
    ;
}