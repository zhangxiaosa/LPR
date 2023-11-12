long f;
short g;
short a = 1;

int main() {
  int c;

  // Unrolled Loop Iteration 1
  {
    g = 3;
    if ((c = 250UL)) {
      if (!a)
        c = g;
      short d = 0xBCD1;
      if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
        f = 1UL;
    }
  }

  printf("checksum = %lX\n", f);
  return 0;
}