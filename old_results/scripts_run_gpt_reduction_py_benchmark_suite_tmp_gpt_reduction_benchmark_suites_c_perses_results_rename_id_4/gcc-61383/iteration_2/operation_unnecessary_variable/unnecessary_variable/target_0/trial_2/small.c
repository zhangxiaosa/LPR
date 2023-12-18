int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

int main() {
  for (; false; ) {
    int ab = 0;
    if (false)
      ;
    else if (ab)
      break;
  }
  return 0;
}