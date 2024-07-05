int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  signed o;
  
  for (;;) {
    // Unrolled loop (iteration 1)
    if (l) {
      l++;
      // Loop body
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
      
      // Unrolled loop (iteration 2)
      if (l) {
        l++;
        // Loop body
        for (k = 0; k >= -27; k = k - 6)
          p1 = o - p1;
          
        // Unrolled loop (iteration 3)
        if (l) {
          l++;
          // Loop body
          for (k = 0; k >= -27; k = k - 6)
            p1 = o - p1;
          
          // Unrolled loop (iteration 4)
          if (l) {
            l++;
            // Loop body
            for (k = 0; k >= -27; k = k - 6)
              p1 = o - p1;
            
            // Unrolled loop (iteration 5)
            if (l) {
              l++;
              // Loop body
              for (k = 0; k >= -27; k = k - 6)
                p1 = o - p1;
            }
          }
        }
      }
    }
    
    p1 || m[2][5];
  }
}

int main() {}
