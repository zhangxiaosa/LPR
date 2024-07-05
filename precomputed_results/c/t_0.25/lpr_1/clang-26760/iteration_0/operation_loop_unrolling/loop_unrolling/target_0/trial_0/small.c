typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;

int main() {
  c j1 = 0x24F96B7BL;
  c j2 = j1 - 1;
  c j3 = j2 - 1;
  c j4 = j3 - 1;
  e k;
  
  for (f = 0; j1 || j2 || j3 || j4; --j1, --j2, --j3, --j4) {
    // Loop body operations for j1
    ;
    
    // Loop body operations for j2
    ;
    
    // Loop body operations for j3
    ;
    
    // Loop body operations for j4
    ;
  }
  
  c l = 1L;
  e p = g;
  
  while (p) {
    k = k >> l;
    if (p)
      k = k << j1;
  }
}