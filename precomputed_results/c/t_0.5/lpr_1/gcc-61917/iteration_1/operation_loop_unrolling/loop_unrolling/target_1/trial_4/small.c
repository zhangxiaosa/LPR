int k;
unsigned l;
volatile unsigned m20;

unsigned fn3(p1) {
  signed o;
  
  // First unrolled iteration
  for (; l; l++) {
    // Unrolled iteration 1
    for (k = 0; k >= -27; k -= 6)
      p1 = o - p1;
    
    // Unrolled iteration 2
    for (k = 0; k >= -27; k -= 6)
      p1 = o - p1;
    
    // Unrolled iteration 3
    for (k = 0; k >= -27; k -= 6)
      p1 = o - p1;
    
    // Unrolled iteration 4
    for (k = 0; k >= -27; k -= 6)
      p1 = o - p1;
    
    p1 || m20;
  }
}

int main() {}