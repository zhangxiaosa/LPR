
<SYS>

// Optimized program with constant propagation and copy propagation
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

// Optimized program with unused variable elimination
int g;
int main() {
  int i;
  int n = g;
  while (n) {
    i = n;
    if (i)
      ;
  }
}

// Final optimized program
int g;
int main() {
  int i;
  int n = g;
  while (n) {
    ;
  }
}

</SYS>
