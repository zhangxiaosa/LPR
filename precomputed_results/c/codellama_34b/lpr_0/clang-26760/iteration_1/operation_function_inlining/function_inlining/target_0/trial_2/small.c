
<SYS>

Given the program:
int g;
int main() {
  int i;
  unsigned j = 0x24F96B7BL;
  unsigned k;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int n = g;
  while (n) {
    k = k >> 1L;
    i = n;
    if (i)
      k = k << j;
  }
}

The target to be optimized is `f`.

Optimized program:
int g;
int main() {
  int i;
  unsigned j = 0x24F96B7BL;
  unsigned k;
  while (j) {
    k = k >> 1L;
    i = j;
    if (i)
      k = k << j;
  }
}
</SYS>
