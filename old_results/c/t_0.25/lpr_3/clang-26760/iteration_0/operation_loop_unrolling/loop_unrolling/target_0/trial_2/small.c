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
  
  // Unrolled loop iterations
  for (; j; j -= 4) {
    // Iteration 1
    ;
    // Iteration 2
    ;
    // Iteration 3
    ;
    // Iteration 4
    ;
  }
  
  c l = 1L;
  c m = j;
  a n = g;
  c o = n;
  e p = o;
  
q:
  k = k >> l;
  i = p;
  
  if (i) {
    k = k << m;
    goto q;
  }
}