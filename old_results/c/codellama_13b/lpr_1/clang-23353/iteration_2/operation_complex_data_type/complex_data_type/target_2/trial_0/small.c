
/*
 * Program to optimize:
 *
 * char fn1(char p1, char p2) { return p1 * p2; }
 * char *fn2(int p1, char *p2, char p3) {
 *   for (p3 = 6; p3 != -7; p3--)
 *     j ^= fn1(p3, i) && 1L;
 *   return p2;
 * }
 *
 * The target to be optimized is `fn2` (function pointer).
 */

// Decompose the program into variables with primary data types:
char fn1_p1;
char fn1_p2;
char fn1_result;
int fn2_p1;
char *fn2_p2;
char fn2_p3;
char fn2_j;
char fn2_result;

// Modify the program to use the decomposed variables:
fn1_result = fn1(fn1_p1, fn1_p2);

for (fn2_p3 = 6; fn2_p3 != -7; fn2_p3--) {
  fn2_j ^= fn1(fn2_p3, fn2_p1) && 1L;
}

fn2_result = fn2_p2;

// Return the optimized program:
fn2_result;
