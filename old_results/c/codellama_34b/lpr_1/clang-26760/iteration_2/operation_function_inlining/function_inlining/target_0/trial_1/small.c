
<SYS>

int g;
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

/* Optimized version */

int main() {
  int i, j, k, n;
  j = 0x24F96B7BL;
  k = 0;
  while (n) {
    k = k >> 1;
    i = n;
    if (i)
      k = k << j;
  }
}

</SYS>
