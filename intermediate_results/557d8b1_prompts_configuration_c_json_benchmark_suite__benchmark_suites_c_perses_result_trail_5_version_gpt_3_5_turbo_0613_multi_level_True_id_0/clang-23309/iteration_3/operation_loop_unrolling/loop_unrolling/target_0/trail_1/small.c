int main() {
  int c;

  if (c = 250U) {
    if (a || (c = 3)) {
      short d = 0xBCD1;
      if (fn1(d, 1U - c) - a & 1)
        f = 1;
    }
  }

  if (c = 250U) {
    if (a || (c = 2)) {
      short d = 0xBCD1;
      if (fn1(d, 1U - c) - a & 1)
        f = 1;
    }
  }

  if (c = 250U) {
    if (a || (c = 1)) {
      short d = 0xBCD1;
      if (fn1(d, 1U - c) - a & 1)
        f = 1;
    }
  }

  printf("checksum = %lX\n", f);
  return 0;
}