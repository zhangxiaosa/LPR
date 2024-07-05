typedef int a;
unsigned f;
a g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;

  // Unrolled loop
  if (j >= 1) {
    // Loop body iteration 1
  }
  if (j >= 2) {
    // Loop body iteration 2
  }
  // ...
  if (j >= j) {
    // Loop body iteration j
  }

  a n = g;
  int o = n;
  unsigned p = o;

q:
  k = k >> 1;
  i = p;

  if (i) {
    k = k << j;
    goto q;
  }
}