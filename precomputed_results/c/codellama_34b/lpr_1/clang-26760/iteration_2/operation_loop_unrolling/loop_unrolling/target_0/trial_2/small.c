
<SYS>

Given the following program and the first line of a loop, optimize it out via loop unrolling.. The program is int g;
int main() {
  int i;
  int j = 0x24F96B7BL;
  unsigned k;
  for (int f; f;)
    for (; j; --j)
      ;
  int n = g;
  while (n) {
    k = k >> 1;
    i = n;
    if (i)
      k = k << j;
  }
}
.                 The target to be optimized is for (; j; --j).

The optimized program is:
