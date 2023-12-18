int g;
unsigned fn1() {
  unsigned j = 0x24F96B7BL;
  unsigned k;

  // Unrolled loop iteration 1
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;

  // Unrolled loop iteration 2
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;

  // Unrolled loop iteration 3
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;

  // Unrolled loop iteration 4
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;

  unsigned m = j;
  unsigned n = g;

q:
  k = k >> 1L;
  if (n) {
    k = k << m;
    goto q;
  }
}

int main() {}