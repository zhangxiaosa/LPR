typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;

b fn1() {
  a i;
  c j = 0x24F96B7BL;
  e k;
  if (j >= 4) {
    j -= 4;
    // Loop body (unrolled) - 4 iterations
    // Iteration 1
    // Iteration 2
    // Iteration 3
    // Iteration 4
  }
  while (j > 0) {
    --j;
    // Original loop body code
    // Original loop body code
    // Original loop body code
    // Original loop body code
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

int main() {}