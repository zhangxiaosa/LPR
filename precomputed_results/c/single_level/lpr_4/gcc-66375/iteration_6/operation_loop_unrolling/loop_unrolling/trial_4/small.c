#include&lt;stdio.h&gt;

char fn2(char p1, int p2) {
  return p1;
}

unsigned p;
unsigned u;
unsigned v_3;

int main() {
  int d = 2L;

  v_3 = d;
  d = fn2(v_3, 3);
  d = d + 0x9EE7F9D1C772505B;

  v_3 = d;
  d = fn2(v_3, 3);
  d = d + 0x9EE7F9D1C772505B;

  // Repeated for a total of 51 iterations
  
  // Assign last value of v_3 to p
  p = v_3;

  printf("checksum = %X\n", p);
  return 0;
}