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
  
  // Loop unrolling
  // Iteration 1
  ;
  --j;
  
  // Iteration 2
  ;
  --j;
  
  // Iteration 3
  ;
  --j;
  
  // Iteration 4
  ;
  --j;
  
  // Iteration 5
  ;
  --j;
  
  // Update loop variable j to its final value
  j = 0;
  
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
