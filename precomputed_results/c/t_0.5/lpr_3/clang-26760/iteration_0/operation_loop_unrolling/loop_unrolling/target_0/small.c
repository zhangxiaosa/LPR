typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;
int main() {
  a i;
  c j = 0x24F96B7BL;
  e k;

  if (j >= 4) {
    // Iteration 1
    --j;
    // Iteration 2
    --j;
    // Iteration 3
    --j;
    // Iteration 4
    --j;
  } else if (j == 3) {
    // Iteration 1
    --j;
    // Iteration 2
    --j;
    // Iteration 3
    --j;
  } else if (j == 2) {
    // Iteration 1
    --j;
    // Iteration 2
    --j;
  } else if (j == 1) {
    // Iteration 1
    --j;
  }

  c l = 1L;
  c m = j;
  a n = g;
  c o = n;
  e p = o;
q:;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}