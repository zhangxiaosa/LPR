
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

// Constant propagation and copy propagation optimization
int g;
int main() {
  int i;
  int j = 0x24F96B7BL;
  int k = 0; // optimized out
  while (g) {
    k = k >> 1;
    i = g;
    if (i)
      k = k << j;
  }
}

</SYS>
