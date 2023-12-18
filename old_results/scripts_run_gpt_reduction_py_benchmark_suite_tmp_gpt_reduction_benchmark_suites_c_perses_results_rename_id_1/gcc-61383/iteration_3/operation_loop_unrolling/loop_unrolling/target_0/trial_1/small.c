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
  int temp;
  if (m < 12) {
    temp = o == 0 ? o : o % o;
    if (o > 0xE3L) {
      if (!temp)
        m = fn3(m, 3);
      else
        break;
    } else {
      // Unrolled loop iterations 1-12
      // ...
    }
  }
  return m;
}

int main() {
  if (fn5(o))
    ;
}
