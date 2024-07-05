typedef short a;
typedef int b;
typedef long c;
typedef unsigned f;
typedef unsigned g;
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
f p;
f u;
c v;
a w;
f ab;
a ac = 1L;

int main() {
  c am = 1L;
  b an;
  f p1_copy;
  g p1;
  
  // Loop Iteration 1
  w = 3;
  if (an == 250UL) {
    u = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - u & 1UL)
      v = 1UL;
  }
  p1_copy = v;
  
  // Loop Iteration 2
  w = 2;
  if (an == 250UL) {
    u = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - u & 1UL)
      v = 1UL;
  }
  
  // Loop Iteration 3
  w = 1;
  if (an == 250UL) {
    u = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - u & 1UL)
      v = 1UL;
  }
  
  p1 = p1_copy;
  p = p1_copy;
  printf("checksum = %X\n", p);
  return 0;
}