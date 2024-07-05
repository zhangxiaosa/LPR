#include <stdio.h>

/* Typedefs */
typedef short b;
typedef int c;
typedef unsigned short e;
typedef unsigned f;

c g;
c h;

f fn4(c p1, e p2, e p3, f p4, e p5) {
  b ak[8];
  
  /* Loop unrolling for (p2 = 0; p2 <= 7; p2 += 1) */
  /* Iteration 1: p2 = 0 */
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }
  
  /* Iteration 2: p2 = 1 */
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }
  
  /* Iteration 3: p2 = 2 */
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }
  
  /* Iteration 4: p2 = 3 */
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }
  
  /* Iteration 5: p2 = 4 */
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }
  
  /* Iteration 6: p2 = 5 */
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }
  
  /* Iteration 7: p2 = 6 */
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }
  
  /* Iteration 8: p2 = 7 */
  for (p4 = 0; p4 <= 7; p4 += 1) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }
  
  return g;
}

int main() {
  c n = 1L;
  c p5 = -7L;
  if (fn4(p5, 4294967287UL, p5, g, n))
    ;
}
